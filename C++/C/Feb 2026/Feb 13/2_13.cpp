#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <optional> // SFML 3.0で必須になりました

int main() {
    // 800x600のウィンドウを作成
    sf::RenderWindow window(sf::VideoMode({800, 600}), "C++ Sine Wave Plot"); // サイズも{}で囲む

    std::vector<sf::CircleShape> points;
    float x_offset = 0.0f;

    while (window.isOpen()) {
        // --- SFML 3.0 の新しいイベント処理 ---
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        // ------------------------------------

        window.clear();

        // 三角関数で座標を計算して描画
        for (int x = 0; x < 800; x++) {
            float angle = (x + x_offset) * 0.1f; 
            float y = std::sin(angle) * 200.0f;  

            sf::CircleShape point(1); 
            
            // SFML 3.0: 座標は Vector2f ({x, y}) で渡す必要があります
            point.setPosition({(float)x, 300.0f + y}); 
            
            point.setFillColor(sf::Color::Cyan);
            window.draw(point);
        }

        window.display();
        x_offset += 0.1f; 
    }
    return 0;
}