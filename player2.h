#pragma once
#include<SFML/Graphics.hpp>
#include"vector2d.h"
using namespace sf;
class player2 {
private:
	static constexpr float speed = 0.4f;

public:
	//ajoute

	void update(float& dt);
	//ajoute

	vector2d location = vector2d(-30, 201);
	void draw(RenderWindow& window);
	void inputs();
	void die(RenderWindow& window);


	sf::Texture gameOver;
	sf::Sprite GAMEOVER;


	sf::Texture texture;
	sf::Sprite sprite;
};