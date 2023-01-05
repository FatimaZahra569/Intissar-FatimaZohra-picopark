#include "player.h"
#include"physiques.h"
player::player() {
    
}
player::~player() {

}
void player::draw(RenderWindow& window) {
    if (direction == -1) {
        // draw the left-facing sprite
        leftTexture.loadFromFile("res/playerLEFT.png");
        leftSprite.setTexture(leftTexture);
        leftSprite.setScale(0.1, 0.1);
        leftSprite.setPosition(physics.location.x,physics.location.y);
        window.draw(leftSprite);
    }
    else {
        // draw the right-facing sprite
        rightTexture.loadFromFile("res/player.png");
        rightSprite.setTexture(rightTexture);
        rightSprite.setScale(0.1,0.1);
        rightSprite.setPosition(physics.location.x, physics.location.y);
        window.draw(rightSprite);
    }
   
}
void player::inputs() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))

    {

        physics.location.x += speed;
        direction = 1;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        if (physics.location.x>0)
        {
            physics.location.x -= speed;
            direction = -1;
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        if (physics.location.y <300) {
            physics.location.y -= 5;
            //if (physics.location.y < 0)
               // physics.location.y = 0;

        }
    }
}



void player::inputsPlayer3() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))

    {

        physics.location.x += speed;
        direction = 1;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        if (physics.location.x > 0)
        {
            physics.location.x -= speed;
            direction = -1;
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        if (physics.location.y <= 0)
            physics.location.y = 0;
        if (physics.location.y < 350) {
            physics.location.y -= 5;
            //if (physics.location.y < 0)
               // physics.location.y = 0;

        }
    }
}




void player::ticks(const sf::Time& deltatime) {
    physics.ticks(deltatime);

}

void player::ticksPlayer3(const sf::Time& deltatime)
{
    physics.ticksPlayer3(deltatime);
}

void player::die(RenderWindow& window)
{
    window.clear();
    gameOver.loadFromFile("res/over.png");
    GAMEOVER.setTexture(gameOver);
    GAMEOVER.setScale(1.8, 1.8);
    window.draw(GAMEOVER);
    window.display();
}

void player::diePlayer3(RenderWindow& window)
{
    window.clear();
    gameOver.loadFromFile("res/over.png");
    GAMEOVER.setTexture(gameOver);
    GAMEOVER.setScale(1.8, 1.8);
    window.draw(GAMEOVER);
    window.display();
}
