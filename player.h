#include<SFML/Graphics.hpp>
#include"vector2d.h"
#include"physiques.h"
using namespace sf; 
class player
{
private:
	static constexpr float speed =1.0f;
public:
	player();
	~player();
	vector2d location {0,50};
	void draw(RenderWindow& window);
	void inputs();
	void inputsPlayer3();
	void ticks(const sf::Time& deltatime);
	void ticksPlayer3(const sf::Time& deltatime);
	void die(RenderWindow& window);
	void diePlayer3(RenderWindow& window);

	
	
public :
	physiques physics;
	sf::Texture leftTexture;
	sf::Sprite leftSprite;
	sf::Texture rightTexture;
	sf::Sprite rightSprite;
public :
	sf::Texture gameOver;
	sf::Sprite GAMEOVER;
public :
	sf::Texture texture;
	sf::Sprite sprite;
	int direction;
};