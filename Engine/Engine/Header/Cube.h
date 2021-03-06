#pragma once
#ifndef Cube_H
#define Cube_H

#include <Object.h>

class Cube : public Object
{
public:
	Cube(sf::Vector2f, sf::Vector2f, sf::Color);
	~Cube();

	void Move(sf::Vector2f);
	void Update(float);
	void Draw(sf::RenderWindow &);

	sf::RectangleShape shape;
	sf::Vector2f Center;
};
#endif

