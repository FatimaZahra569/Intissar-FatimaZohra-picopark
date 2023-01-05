#include "physiques.h"
void physiques::ticks(const sf::Time& deltatime) {
	acceleration.y = gravity;//pixele par secondes
	speed += acceleration * deltatime.asSeconds();
	location += speed;
	if ((location.y > 256 && location.x < 120)) {
		location.y = 256;
		speed.y = 0;
	}
	if ((location.y > 264 && (location.x <300 && location.x>150))) {
		location.y = 264;
		speed.y = 0;
	}
	if ((location.y > 264 && (location.x < 540 && location.x>350))) {
		location.y = 264;
		speed.y = 0;
	}
	if ((location.y > 264 && (location.x < 699 && location.x>570))) {
		location.y = 264;
		speed.y = 0;
	}
	if ((location.y > 264 && (location.x <860 && location.x>740))) {
		location.y = 264;
		speed.y = 0;
	}
	if ((location.y > 300 && (location.x <1200 && location.x>880))) {
		location.y = 300;
		speed.y = 0;
	}
}

void physiques::ticksPlayer3(const sf::Time& deltatime)
{
	acceleration.y = gravity;//pixele par secondes
	speed += acceleration * deltatime.asSeconds();
	location += speed;
	// la terre ----------- done
	if ((location.y > 305 && location.x < 250)) {
		location.y = 305;
		speed.y = 0;
	}
	//1eme barre --------- done
	if ((location.y > 250 && (location.x > 280 && location.x < 370))) {
		location.y = 250;
		speed.y = 0;
	}
	//2eme barre --------- done 
	if ((location.y > 186 && (location.x > 420 && location.x < 500))) {
		location.y = 186;
		speed.y = 0;
	}
	//3eme barre --------- done
	if ((location.y > 120 && (location.x > 530 && location.x < 630))) {
		location.y = 120;
		speed.y = 0;
	}
	//4em barre ---------- done
	if ((location.y > 250 && (location.x > 680 && location.x < 770))) {
		location.y = 250;
		speed.y = 0;
	}
	//la terre ----------- done
	if ((location.y > 305 && (location.x > 800 && location.x < 1200))) {
		location.y = 305;
		speed.y = 0;
	}
}
