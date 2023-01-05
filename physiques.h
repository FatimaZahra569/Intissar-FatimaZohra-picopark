#pragma once
#include<SFML/Graphics.hpp>
#include"vector2d.h"
#include"exprValues.h"
class physiques {
public:
	vector2d location {0,0};
	vector2d speed {0,0};
	vector2d acceleration {0,0};
	void ticks(const sf::Time& deltatime);
	void ticksPlayer3(const sf::Time& deltatime);
};