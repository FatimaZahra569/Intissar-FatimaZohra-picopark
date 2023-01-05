#include "player2.h"
#include<SFML/Audio.hpp>
void player2::draw(RenderWindow& window) {
    texture.loadFromFile("res/player2.png");
    sprite.setTexture(texture);
    sprite.setScale(0.1, 0.1);
    sprite.setPosition(location.x, location.y);
    window.draw(sprite);
}
void player2::inputs() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {

        if (location.y > 0)
        {
            location.y -= speed;
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        if (location.y < 380)
        {
            location.y += speed;
        }
}

void player2::die(RenderWindow& window)
{
    if (location.x == 50) {
        window.clear();
        gameOver.loadFromFile("res/over.png");
        GAMEOVER.setTexture(gameOver);
        GAMEOVER.setScale(1.8, 1.8);
        window.draw(GAMEOVER);
        window.display();
    }
}


void player2::update(float& dt) {
    if (location.x <= 1000.0f && location.y < 305)
        location.x += speed * dt;
    if (location.x <= 930.0f && location.y > 305)
        location.x += speed * dt;
}