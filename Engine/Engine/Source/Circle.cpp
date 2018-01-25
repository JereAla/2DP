#include "Circle.h"



Circle::Circle(float radius, sf::Vector2f position, sf::Color color) : Object(position)
{
	shape.setRadius(_radius = radius);
	shape.setPosition(position);
	shape.setFillColor(color);
	//TODO?
}


Circle::~Circle()
{
}

void Circle::Draw()
{
	//TODO
}
void Circle::setRadius(float radius)
{
	_radius = radius;
}

float Circle::getRadius()
{
	return _radius;
}