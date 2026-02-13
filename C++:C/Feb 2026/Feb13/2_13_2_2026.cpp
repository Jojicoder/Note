#include <SFML/Graphics.hpp>
#include <cmath>
#include <optional>

// 度数法変換用の定数 (180 / π)
const float RAD_TO_DEG = 180.0f / 3.14159265f;

int main() {
    sf::ContextSettings settings;
    settings.antiAliasingLevel = 8;
    
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Trigonometry: atan2 (Looking at Mouse)", sf::Style::Default, sf::State::Windowed, settings);
    window.setFramerateLimit(60);

    // 目の位置（画面中央）
    sf::Vector2f leftEyePos = {300.0f, 300.0f};
    sf::Vector2f rightEyePos = {500.0f, 300.0f};

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        // 1. マウスの座標を取得
        // SFML 3.0: Vector2i から Vector2f へのキャストが必要
        sf::Vector2i mousePosI = sf::Mouse::getPosition(window);
        sf::Vector2f mousePos = sf::Vector2f((float)mousePosI.x, (float)mousePosI.y);

        window.clear(sf::Color(50, 50, 50)); // 背景を少しグレーに

        // --- 左目の計算 ---
        // マウスまでの距離（ベクトル）
        float dx1 = mousePos.x - leftEyePos.x;
        float dy1 = mousePos.y - leftEyePos.y;

        // ★ここで数学！ (y, x) から角度を求める魔法の関数
        float angle1 = std::atan2(dy1, dx1);

        // 角度を使って黒目の位置を決める (sin/cosで円周上に配置)
        // 半径20pxの範囲で動く
        sf::Vector2f pupilPos1 = {
            leftEyePos.x + std::cos(angle1) * 20.0f,
            leftEyePos.y + std::sin(angle1) * 20.0f
        };

        // --- 右目の計算（同じことの繰り返し） ---
        float dx2 = mousePos.x - rightEyePos.x;
        float dy2 = mousePos.y - rightEyePos.y;
        float angle2 = std::atan2(dy2, dx2);
        
        sf::Vector2f pupilPos2 = {
            rightEyePos.x + std::cos(angle2) * 20.0f,
            rightEyePos.y + std::sin(angle2) * 20.0f
        };

        // --- 描画 ---
        // 白目 (左)
        sf::CircleShape white1(50);
        white1.setOrigin({50, 50});
        white1.setPosition(leftEyePos);
        white1.setFillColor(sf::Color::White);
        window.draw(white1);

        // 黒目 (左)
        sf::CircleShape black1(15);
        black1.setOrigin({15, 15});
        black1.setPosition(pupilPos1);
        black1.setFillColor(sf::Color::Black);
        window.draw(black1);

        // 白目 (右)
        sf::CircleShape white2(50);
        white2.setOrigin({50, 50});
        white2.setPosition(rightEyePos);
        white2.setFillColor(sf::Color::White);
        window.draw(white2);

        // 黒目 (右)
        sf::CircleShape black2(15);
        black2.setOrigin({15, 15});
        black2.setPosition(pupilPos2);
        black2.setFillColor(sf::Color::Black);
        window.draw(black2);

        window.display();
    }
    return 0;
}