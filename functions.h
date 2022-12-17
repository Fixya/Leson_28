#pragma once
#include "SFML/Graphics.hpp"

void initBat(sf::RectangleShape& bat, const sf::Color batColor, const sf::Vector2f batPosition)
{
	bat.setSize(batSize);
	bat.setFillColor(batColor);
	bat.setPosition(batPosition);
}
void initBall(sf::CircleShape& ball, const sf::Color ballColor, const sf::Vector2f ballPosition)
{
	ball.setRadius(ballRadius);
	ball.setFillColor(ballColor);
	ball.setPosition(ballPosition);
}

void pText(sf::Text& PText, sf::Font& font, const sf::Vector2f textPosition)
{
	PText.setFont(font);
	PText.setCharacterSize(40);
	PText.setPosition(textPosition);
	
}

void bollReboundx(float& ball_speedx,int& Player, sf::Text& PText)
{
	ball_speedx = -ball_speedx;
	Player++;
	PText.setString(std::to_string(Player));
}

void controlBat(sf::RectangleShape& bat, float& batSpeedy, sf::Keyboard::Key up_key, sf::Keyboard::Key down_key)
{
	if (sf::Keyboard::isKeyPressed(up_key))batSpeedy = -batSpeed;
	if (sf::Keyboard::isKeyPressed(down_key))batSpeedy = batSpeed;
	bat.move(0, batSpeedy);
	batSpeedy = 0;
}

void drawall(sf::RenderWindow& window, const sf::RectangleShape& bat1, const sf::RectangleShape& bat2, const sf::CircleShape& ball, const sf::Text& PText1, const sf::Text& PText2)
{
	window.clear();
	window.draw(bat1);
	window.draw(bat2);
	window.draw(ball);
	window.draw(PText1);
	window.draw(PText2);
	window.display();
}

/*float leftbatwall(float x, float y)
{
	(x <= midleftx && midleftx <= x + batWidth) && (y <= midlefty && midlefty <= y + batHeight)
}*/