#include <SFML/Graphics.hpp>
#include <cmath>
#include <vector>
#include <optional> // std::optional を使用

struct Planet {
    float a;
    float e;
    sf::Color color;
};

int main() {
    const int width = 800;
    const int height = 800;
    // SFML 3.0 ではコンストラクタの引数順序などは変わりませんが、VideoModeの指定がシンプルに
    sf::RenderWindow window(sf::VideoMode({(unsigned int)width, (unsigned int)height}), "Solar System Orbit Simulation");

    const float scale = 200.0f;
    const sf::Vector2f center(width / 2.0f, height / 2.0f);

    std::vector<Planet> planets = {
        {0.387f, 0.2056f, sf::Color(150, 150, 150)},
        {0.723f, 0.0067f, sf::Color(255, 165, 0)},
        {1.000f, 0.0167f, sf::Color(0, 100, 255)},
        {1.524f, 0.0934f, sf::Color(255, 0, 0)}
    };

    while (window.isOpen()) {
        // --- 修正箇所1: イベントループ ---
        // SFML 3.0 では pollEvent() が std::optional を返します
        while (const std::optional event = window.pollEvent()) {
            // イベントの種類を .is<T>() で判定します
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        // 太陽の描画
        sf::CircleShape sun(10.0f);
        sun.setFillColor(sf::Color::Yellow);
        // --- 修正箇所2: setOrigin ---
        // 個別の引数(10, 10)ではなく、sf::Vector2f を渡す必要があります
        sun.setOrigin({10.0f, 10.0f}); 
        sun.setPosition(center);
        window.draw(sun);

        for (const auto& p : planets) {
            sf::VertexArray orbit(sf::PrimitiveType::LineStrip, 361);
            for (int i = 0; i <= 360; ++i) {
                float theta = i * (3.14159265f / 180.0f);
                float r = p.a * (1.0f - p.e * p.e) / (1.0f + p.e * std::cos(theta));
                float x = r * std::cos(theta) * scale;
                float y = r * std::sin(theta) * scale;

                orbit[i].position = sf::Vector2f(center.x + x, center.y - y);
                orbit[i].color = p.color;
            }
            window.draw(orbit);
        }

        window.display();
    }
    return 0;
}