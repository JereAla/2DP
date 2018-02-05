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

void Cube::Update(float deltaTime)
{
	setVelocity(getVelocity() + (getAcceleration() * deltaTime));
	setPosition(getPosition() + (getVelocity()*deltaTime));
	shape.setPosition(sf::Vector2f(getPosition().x - Center.x, getPosition().y - Center.y));
	shape.setRotation(shape.getRotation() + (getAngVelocity() * deltaTime));
}

void Cube::Draw(sf::RenderWindow &window)
{
	window.draw(shape);
	//change this to object class??
}