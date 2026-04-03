#include <SFML/Graphics.hpp>
#include <cmath>
#include <optional>

int main() {
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Tangent: The Searchlight", sf::Style::Default, sf::State::Windowed, settings);
    window.setFramerateLimit(60);

    // 壁の位置（中心から右に200px）
    float wallX = 600.0f; 
    sf::Vector2f center = {400.0f, 300.0f};

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) window.close();
        }

        // マウスの位置から角度を計算 (atan2の復習！)
        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        float dx = (float)mousePos.x - center.x;
        float dy = (float)mousePos.y - center.y;
        float angle = std::atan2(dy, dx);

        window.clear(sf::Color(20, 20, 20));

        // 1. 壁を描画（青い線）
        sf::Vertex line[] = {
            sf::Vertex{{wallX, 0.0f}, sf::Color::Cyan},
            sf::Vertex{{wallX, 600.0f}, sf::Color::Cyan}
        };
        window.draw(line, 2, sf::PrimitiveType::Lines);

        // 2. 中心からマウスへの線を描画（赤い線＝サーチライトの向き）
        sf::Vertex ray[] = {
            sf::Vertex{center, sf::Color::Red},
            sf::Vertex{sf::Vector2f{(float)mousePos.x, (float)mousePos.y}, sf::Color::Red}
        };
        window.draw(ray, 2, sf::PrimitiveType::Lines);

        // ★★ 3. タンジェントで「壁のどこに当たるか」を計算 ★★
        // tan(角度) = 高さ / 底辺
        // 高さ = tan(角度) * 底辺
        float distanceToWall = wallX - center.x; // 底辺の長さ (200px)
        float hitHeight = std::tan(angle) * distanceToWall; // これがタンジェントの力！

        // 壁上のヒット位置
        sf::Vector2f hitPos = {wallX, center.y + hitHeight};

        // ヒット位置にボールを描画
        sf::CircleShape ball(10);
        ball.setOrigin({10, 10});
        ball.setPosition(hitPos);
        ball.setFillColor(sf::Color::White);

        // 画面内にあるときだけ描画（暴走防止）
        if (hitPos.y > -1000 && hitPos.y < 1600) {
            window.draw(ball);
        }

        window.display();
    }
    return 0;
}