#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <optional>
#include <cstdint> // std::uint8_t を使うために必要

// 3Dの点を表す構造体
struct Point3D {
    float x, y, z;
};

int main() {
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;
    
    // SFML 3.0: ウィンドウサイズは {} で囲む
    sf::RenderWindow window(sf::VideoMode({800, 600}), "3D Sphere Wireframe", sf::Style::Default, sf::State::Windowed, settings);
    window.setFramerateLimit(60);

    std::vector<Point3D> points;
    float radius = 200.0f; // 球の半径
    int resolution = 30;   // 球の細かさ（少し増やしました）

    const float PI = 3.1415926535f;

    // --- 1. 数学パート：球体の点の位置を計算 ---
    for (int i = 0; i <= resolution; ++i) {
        float lat = (float)i / resolution * PI; // 緯度
        for (int j = 0; j <= resolution; ++j) {
            float lon = (float)j / resolution * 2.0f * PI; // 経度

            float x = radius * std::sin(lat) * std::cos(lon);
            float y = radius * std::sin(lat) * std::sin(lon);
            float z = radius * std::cos(lat);
            
            // 修正: {} で初期化
            points.push_back(Point3D{x, y, z});
        }
    }

    float angleX = 0.0f;
    float angleY = 0.0f;

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        angleX += 0.01f;
        angleY += 0.02f;

        window.clear(sf::Color::Black);

        std::vector<sf::Vertex> drawPoints;
        sf::Vector2f center = {400.0f, 300.0f};

        for (const auto& p : points) {
            // 回転計算（簡易的な行列回転）
            // X軸回転
            float y1 = p.y * std::cos(angleX) - p.z * std::sin(angleX);
            float z1 = p.y * std::sin(angleX) + p.z * std::cos(angleX);
            
            // Y軸回転
            float x2 = p.x * std::cos(angleY) - z1 * std::sin(angleY);
            float z2 = p.x * std::sin(angleY) + z1 * std::cos(angleY);
            
            // 透視投影
            float scale = 400.0f / (400.0f + z2 + radius); // +radiusしてカメラ位置を調整
            float finalX = x2 * scale + center.x;
            float finalY = y1 * scale + center.y;

            // --- 修正箇所: sf::Uint8 -> std::uint8_t ---
            // 奥行きに応じて明るさを変える
            float depth = (z2 + radius) / (2 * radius);
            if (depth < 0) depth = 0;
            if (depth > 1) depth = 1;

            std::uint8_t brightness = (std::uint8_t)(depth * 255);
            sf::Color pointColor(brightness, brightness, 255); 

            // SFML 3.0: Vertexの初期化も {}
            drawPoints.push_back(sf::Vertex{sf::Vector2f{finalX, finalY}, pointColor});
        }
        
        window.draw(drawPoints.data(), drawPoints.size(), sf::PrimitiveType::Points);
        window.display();
    }
    return 0;
}