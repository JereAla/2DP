#include "Cube.h"

Cube::Cube(sf::Vector2f size, sf::Vector2f position, sf::Color color)
{
	shape.setSize(sf::Vector2f(size.x, size.y));
	shape.setPosition(sf::Vector2f(position.x, position.y));
	shape.setFillColor(color);
}

Cube::~Cube()
{
}

void Cube::Move(sf::Vector2f newPosition)
{

}

void Cube::Draw()
{
	
}