#pragma once
#include <SFML/Graphics.hpp>

struct Bat
{
	sf::RectangleShape leftBat, rightBat;
	float leftBatSpeedy = 0.f;
	float rightBatSpeedy = 0.f;
};

struct Ball
{
	sf::RenderWindow window;
	float ball_speedy;
};



struct Game
{
	Bat leftBat, rightBat;
	Ball ball;
	sf::Font font;
	sf::Text leftPText, rightPText;
	sf::RenderWindow window;
};