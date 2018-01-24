#include "Cube.h"

Cube::Cube(sf::Vector2f size, sf::Vector2f position, sf::Color color) : Object(position)
{
	shape.setSize(sf::Vector2f(size.x, size.y));
	Center.x = size.x / 2;
	Center.y = size.y / 2;
	shape.setPosition(sf::Vector2f(position.x - Center.x, position.y - Center.y));
	shape.setFillColor(color);
}

Cube::~Cube()
{
}

void Cube::Move(sf::Vector2f newPosition)
{
	shape.setPosition(sf::Vector2f(newPosition.x - Center.x, newPosition.y - Center.y));
}

void Cube::Draw()
{
	
}