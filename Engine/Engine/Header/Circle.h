#pragma once
#ifndef Circle_H
#define Circle_H

#include <Object.h>

class Circle : public Object
{
public:
	Circle(float radius = 1, sf::Vector2f position = sf::Vector2f(0.f,0.f),
		sf::Color color =  sf::Color::Blue);
	~Circle();

	void Draw();
	void setRadius(float radius);

	float getRadius();

	sf::CircleShape shape;
private:
	float _radius;
};
#endif

