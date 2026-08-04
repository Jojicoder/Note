#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <optional>

int main() {
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;
    
    // SFML 3.0: ウィンドウサイズも {} で囲む
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Lissajous Curve", sf::Style::Default, sf::State::Windowed, settings);
    window.setFramerateLimit(60);

    std::vector<sf::Vertex> trail;
    float time = 0.0f;

    // x_freq = 3.0, y_freq = 2.0 (完全五度)
    float x_freq = 3.0f; 
    float y_freq = 2.0f; 

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        time += 0.02f;

        float x = std::sin(x_freq * time) * 250.0f; 
        float y = std::sin(y_freq * time) * 250.0f; 

        // 画面中央 (400, 300) にオフセット
        sf::Vector2f position = {400.0f + x, 300.0f + y};

        sf::Color color = sf::Color(
            (std::uint8_t)((std::sin(time) + 1) * 127),   
            (std::uint8_t)((std::cos(time) + 1) * 127),   
            255                           
        );

        // --- 修正箇所: () を {} に変更 ---
        trail.push_back(sf::Vertex{position, color});

        if (trail.size() > 1000) {
            trail.erase(trail.begin());
        }

        window.clear(sf::Color::Black);
        
        // 描画
        window.draw(trail.data(), trail.size(), sf::PrimitiveType::LineStrip);

        sf::CircleShape ball(5);
        ball.setOrigin({5, 5}); 
        ball.setPosition(position);
        ball.setFillColor(sf::Color::White);
        window.draw(ball);

        window.display();
    }
    return 0;
}