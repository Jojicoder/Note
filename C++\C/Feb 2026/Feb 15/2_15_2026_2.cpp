#include <SFML/Graphics.hpp>
#include <cmath>
#include <vector>
#include <optional>

struct Planet {
    std::string name; // 名前（デバッグ用）
    float a;          // 軌道長半径 (AU)
    float e;          // 離心率
    sf::Color color;  // 色
    
    // アニメーション用データ
    float period;       // 公転周期 (年)
    float currentAngle; // 現在の角度 (ラジアン)
};

int main() {
    // 画面設定
    const int width = 800;
    const int height = 800;
    sf::RenderWindow window(sf::VideoMode({(unsigned int)width, (unsigned int)height}), "Solar System Animation");
    window.setFramerateLimit(60); // 60fpsに制限（速すぎないように）

    const float scale = 200.0f;
    const sf::Vector2f center(width / 2.0f, height / 2.0f);

    // 惑星データの作成
    std::vector<Planet> planets = {
        {"Mercury", 0.387f, 0.2056f, sf::Color(180, 180, 180)},
        {"Venus",   0.723f, 0.0067f, sf::Color(255, 165, 0)},
        {"Earth",   1.000f, 0.0167f, sf::Color(0, 100, 255)},
        {"Mars",    1.524f, 0.0934f, sf::Color(255, 50, 50)}
    };

    // 初期化：公転周期の計算 (T = sqrt(a^3))
    for (auto& p : planets) {
        p.period = std::sqrt(p.a * p.a * p.a);
        p.currentAngle = 0.0f; // スタート位置
    }

    // シミュレーションの速度調整係数
    // この値を大きくすると全体が速く回ります
    const float simulationSpeed = 0.02f;

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        // 1. 太陽の描画
        sf::CircleShape sun(8.0f);
        sun.setFillColor(sf::Color::Yellow);
        sun.setOrigin({8.0f, 8.0f});
        sun.setPosition(center);
        window.draw(sun);

        // 2. 惑星のループ処理
        for (auto& p : planets) {
            // --- A. 軌道の線を描く (前回と同じ) ---
            sf::VertexArray orbit(sf::PrimitiveType::LineStrip, 361);
            // 軌道の色を少し暗くして、惑星を目立たせる
            sf::Color trailColor = p.color;
            trailColor.a = 100; // 透明度を設定

            for (int i = 0; i <= 360; ++i) {
                float theta = i * (3.14159265f / 180.0f);
                float r = p.a * (1.0f - p.e * p.e) / (1.0f + p.e * std::cos(theta));
                float x = r * std::cos(theta) * scale;
                float y = r * std::sin(theta) * scale;
                orbit[i].position = sf::Vector2f(center.x + x, center.y - y);
                orbit[i].color = trailColor;
            }
            window.draw(orbit);

            // --- B. 惑星の位置を更新する (アニメーション) ---
            // 角度を進める: 速度は「周期の逆数 (1/T)」に比例する
            // 地球(period=1)が進む量を基準に、周期が短い水星はたくさん進む
            p.currentAngle += simulationSpeed / p.period;

            // 角度が 2π (1周) を超えたらリセット（オーバーフロー防止）
            if (p.currentAngle > 2 * 3.14159265f) {
                p.currentAngle -= 2 * 3.14159265f;
            }

            // --- C. 現在位置の座標計算 ---
            // 軌道計算と同じ式に currentAngle を代入
            float r = p.a * (1.0f - p.e * p.e) / (1.0f + p.e * std::cos(p.currentAngle));
            float px = r * std::cos(p.currentAngle) * scale;
            float py = r * std::sin(p.currentAngle) * scale;

            // --- D. 惑星（点）の描画 ---
            sf::CircleShape planetShape(5.0f); // 半径5ピクセルの点
            planetShape.setFillColor(p.color);
            planetShape.setOrigin({5.0f, 5.0f}); // 中心を合わせる
            planetShape.setPosition({center.x + px, center.y - py});
            
            window.draw(planetShape);
        }

        window.display();
    }

    return 0;
}