#pragma once
#ifndef Cube_H
#define Cube_H

#include <SFML/Graphics.hpp>

class Cube
{
public:
	Cube(sf::Vector2f, sf::Vector2f, sf::Color);
	~Cube();

	void Move(sf::Vector2f);

	void Draw();

	sf::RectangleShape shape;
	sf::Vector2f Center;
};
#endif

