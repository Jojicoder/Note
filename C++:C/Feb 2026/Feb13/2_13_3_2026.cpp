#include <SFML/Graphics.hpp>
#include <optional>

int main() {
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;
    
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Physics: Gravity & Bounce", sf::Style::Default, sf::State::Windowed, settings);
    window.setFramerateLimit(60);

    // ボールの設定
    sf::CircleShape ball(20);
    ball.setOrigin({20, 20}); // 中心を基準にする
    ball.setFillColor(sf::Color::Cyan);

    // --- ここが物理の変数 ---
    sf::Vector2f position = {400.0f, 100.0f}; // 最初の位置
    sf::Vector2f velocity = {5.0f, 0.0f};     // 最初の速度 (右へ5、下へ0)
    
    float gravity = 0.5f;   // 重力加速度 (毎フレーム0.5ずつ下へ加速)
    float bounce = 1.1f;    // 跳ね返り係数 (1.0だと永遠に跳ねる、0.8だとエネルギーが減る)

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            // クリックしたらボールを上に弾く（リセット）
            else if (event->is<sf::Event::MouseButtonPressed>()) {
                velocity.y = -15.0f; // 上向きにドーンと速度を与える
                velocity.x = (std::rand() % 10) - 5.0f; // ランダムに横へ飛ばす
            }
        }

        // --- 物理計算パート (オイラー法) ---
        
        // 1. 重力を速度に足す (加速)
        velocity.y += gravity;

        // 2. 速度を位置に足す (移動)
        position += velocity;

        // 3. 地面との衝突判定
        if (position.y > 580.0f) { // 画面の下端 (600 - 半径20)
            position.y = 580.0f;   // めり込み防止
            
            // 速度を反転させる (跳ね返り)
            // さらに、エネルギーを少し減らす (* bounce)
            velocity.y = -velocity.y * bounce;
        }

        // 4. 壁（左右）との衝突判定
        if (position.x > 780.0f || position.x < 20.0f) {
            velocity.x = -velocity.x * bounce; // 横方向も反転
            
            // 画面外に出ないように補正
            if (position.x > 780.0f) position.x = 780.0f;
            if (position.x < 20.0f) position.x = 20.0f;
        }

        // 描画更新
        ball.setPosition(position);

        window.clear(sf::Color(30, 30, 30));
        window.draw(ball);
        window.display();
    }
    return 0;
}