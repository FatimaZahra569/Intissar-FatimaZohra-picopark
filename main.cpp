#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include"player.h"
#include"player2.h"
#include"exprValues.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_X, WINDOW_Y), "SFML works!");
    sf::Clock clock;
    sf::Texture texture2;
    texture2.loadFromFile("res/lvl1.png");
    sf::Sprite sprite2(texture2);
    sprite2.setScale(1.8, 1.8);

    sf::Texture texture3;
    texture3.loadFromFile("res/menuu.png");
    sf::Sprite sprite3(texture3);
    sprite3.setScale(1.8, 1.8);


    sf::Texture texture5;
    texture5.loadFromFile("res/level2.jpeg");
    sf::Sprite sprite5(texture5);
    sprite5.setScale(1.8, 1.8);

    sf::Texture texture6;
    texture6.loadFromFile("res/level3.png");
    sf::Sprite sprite6(texture6);
    sprite6.setScale(1.8, 1.8);



    sf::Texture texture7;
    texture7.loadFromFile("res/congrats.png");
    sf::Sprite sprite7(texture7);
    sprite7.setScale(1, 1);

    
    player2 PLAYER2;
    player PLAYER;
    player PLAYER3;

    while (window.isOpen())
    {
        sf::Time deltatime = clock.getElapsedTime();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        //start :
        window.clear();
        while (window.isOpen()) {
            window.draw(sprite3);
            window.display();
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
                break;
        }
        



        window.clear();
        while (PLAYER.physics.location.y < 350) {
            PLAYER.ticks(deltatime);
            PLAYER.inputs(); // handle player input

            window.draw(sprite2);
            PLAYER.draw(window);
            window.display();
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            while (PLAYER.physics.location.y > 350 && PLAYER.physics.location.y < 380) {
                PLAYER.die(window);
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
            }
            while (PLAYER.physics.location.x>=1000)
            {
                sf::Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
                window.clear();

                float dt = clock.getElapsedTime().asSeconds();
                dt = 1;
                clock.restart(); // reset the clock for the next frame
                //PLAYER2 inputs(); // handle player input
                PLAYER2.update(dt); // update the player's position and velocity
                PLAYER2.inputs();
                window.draw(sprite5);
                PLAYER2.draw(window);
                PLAYER2.die(window);
                window.display();
                while (PLAYER2.location.x >= 1000)
                {
                    
                    window.clear();

                    PLAYER.physics.location.x = PLAYER.physics.location.x = 0;
                   while (PLAYER3.physics.location.y < 350) {
                        
                        PLAYER.ticksPlayer3(deltatime);
                        PLAYER.inputsPlayer3(); // handle player input

                        window.draw(sprite6);
                        PLAYER.draw(window);
                        window.display();


                        while (window.pollEvent(event))
                        {
                            if (event.type == sf::Event::Closed)
                                window.close();
                        }
                    }
                  
                    window.display();
                    
                }
                while (PLAYER3.physics.location.x >= 1000) {
                    window.clear();
                    window.draw(sprite7);
                    window.display();
                }  
            }
        }
        return 0; 
    }
} 