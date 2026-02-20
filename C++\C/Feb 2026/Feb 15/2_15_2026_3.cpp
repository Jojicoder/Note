#include <SFML/Graphics.hpp>
#include <cmath>
#include <vector>
#include <string>
#include <optional>
#include <iostream> // デバッグ表示用

struct Planet {
    std::string name;
    float a;          // 軌道長半径 (AU)
    float e;          // 離心率
    sf::Color color;  // 色
    float radius;     // 表示上のサイズ（見やすさ調整用）
    
    float period;       // 公転周期 (計算用)
    float currentAngle; // 現在の角度
};

int main() {
    const int width = 1000;
    const int height = 800;
    sf::RenderWindow window(sf::VideoMode({(unsigned int)width, (unsigned int)height}), "Solar System: All 8 Planets");
    window.setFramerateLimit(60);

    // 初期スケール（少し小さめにして外惑星を見やすく）
    float scale = 20.0f; 
    sf::Vector2f center(width / 2.0f, height / 2.0f);

    // 時間の進む速さ
    float simulationSpeed = 0.05f;

    // 太陽系全8惑星のデータ
    // ※見やすさのため、惑星の描画サイズ(radius)は実際の比率ではありません
    std::vector<Planet> planets = {
        {"Mercury", 0.387f, 0.2056f, sf::Color(169, 169, 169), 3.0f},
        {"Venus",   0.723f, 0.0067f, sf::Color(218, 165, 32),  4.5f},
        {"Earth",   1.000f, 0.0167f, sf::Color(30, 144, 255),  5.0f},
        {"Mars",    1.524f, 0.0934f, sf::Color(255, 69, 0),    4.0f},
        {"Jupiter", 5.204f, 0.0484f, sf::Color(222, 184, 135), 12.0f},
        {"Saturn",  9.582f, 0.0541f, sf::Color(244, 164, 96),  10.0f},
        {"Uranus",  19.201f, 0.0471f, sf::Color(175, 238, 238), 8.0f},
        {"Neptune", 30.047f, 0.0085f, sf::Color(65, 105, 225), 8.0f}
    };

    // 公転周期の初期計算
    for (auto& p : planets) {
        p.period = std::sqrt(p.a * p.a * p.a);
        p.currentAngle = 0.0f; 
    }

    // フォント読み込み（情報の表示用・オプション）
    // もしフォントがない場合はテキスト描画部分をコメントアウトしてください
    sf::Font font;
    bool hasFont = false;
    // MacやLinuxの一般的なパス。Windowsなら "C:/Windows/Fonts/arial.ttf" など
    if (font.openFromFile("/System/Library/Fonts/Helvetica.ttc") || font.openFromFile("C:/Windows/Fonts/arial.ttf")) {
        hasFont = true;
    }

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            // --- ズーム機能 (マウスホイール) ---
            else if (const auto* wheel = event->getIf<sf::Event::MouseWheelScrolled>()) {
                if (wheel->delta > 0) {
                    scale *= 1.1f; // ズームイン
                } else {
                    scale *= 0.9f; // ズームアウト
                }
            }
            // --- 時間操作 (キーボード) ---
            else if (const auto* key = event->getIf<sf::Event::KeyPressed>()) {
                if (key->code == sf::Keyboard::Key::Right) {
                    simulationSpeed *= 1.5f; // 早送り
                } else if (key->code == sf::Keyboard::Key::Left) {
                    simulationSpeed /= 1.5f; // スロー/逆再生
                }
            }
        }

        window.clear(sf::Color::Black);

        // 中心点（太陽）
        sf::CircleShape sun(10.0f);
        sun.setFillColor(sf::Color::Yellow);
        sun.setOrigin({10.0f, 10.0f});
        sun.setPosition(center);
        window.draw(sun);

        for (auto& p : planets) {
            // 軌道の描画 (精度を落として高速化: 360 -> 180分割)
            sf::VertexArray orbit(sf::PrimitiveType::LineStrip, 181);
            sf::Color trailColor = p.color;
            trailColor.a = 50; // 薄くする

            for (int i = 0; i <= 180; ++i) {
                float theta = i * 2 * (3.14159265f / 180.0f); // 0 ~ 2pi
                float r = p.a * (1.0f - p.e * p.e) / (1.0f + p.e * std::cos(theta));
                
                // ズーム倍率(scale)を適用
                float x = r * std::cos(theta) * scale;
                float y = r * std::sin(theta) * scale;
                orbit[i].position = sf::Vector2f(center.x + x, center.y - y);
                orbit[i].color = trailColor;
            }
            window.draw(orbit);

            // 惑星の移動
            p.currentAngle += simulationSpeed / p.period;
            
            // 位置計算
            float r = p.a * (1.0f - p.e * p.e) / (1.0f + p.e * std::cos(p.currentAngle));
            float px = r * std::cos(p.currentAngle) * scale;
            float py = r * std::sin(p.currentAngle) * scale;

            // 惑星の描画
            sf::CircleShape planetShape(p.radius);
            planetShape.setFillColor(p.color);
            planetShape.setOrigin({p.radius, p.radius});
            planetShape.setPosition({center.x + px, center.y - py});
            window.draw(planetShape);
        }

        // --- 情報表示 (UI) ---
        if (hasFont) {
            sf::Text infoText(font);
            infoText.setCharacterSize(16);
            infoText.setFillColor(sf::Color::White);
            infoText.setPosition({10, 10});
            std::string info = "Scale: " + std::to_string((int)scale) + " pixels/AU\n" +
                               "Speed: " + std::to_string(simulationSpeed) + "\n" +
                               "[Scroll] Zoom | [Arrows] Change Speed";
            infoText.setString(info);
            window.draw(infoText);
        }

        window.display();
    }

    return 0;
}