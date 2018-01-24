#include "Object.h"



Object::Object(sf::Vector2f pos, sf::Vector2f rot, float mass)
{
	_position = pos;
	_rotation = rot;
	_mass = mass;

	//vv-- maybe change values or add to parameters
	_velocity = sf::Vector2f(0.f, 0.f);
	_acceleration = sf::Vector2f(0.f, 0.f);

	//_inertia = ???
	_angularVelocity = 0.f;
}

Object::~Object()
{
}

void Object::Draw()
{
	//TODO
}

void Object::Move(sf::Vector2f)
{
	//TODO
}

void Object::setPosition(sf::Vector2f position)
{
	_position = position;
	//draw object to new position?
}
void Object::setRotation(sf::Vector2f rotation)
{
	-_rotation = rotation;
	//draw object with new rotation?
}
void Object::setVelocity(sf::Vector2f velocity)
{
	_velocity = velocity;
}
void Object::setAcceleration(sf::Vector2f acceleration)
{
	_acceleration = acceleration;
}
void Object::setMass(float mass)
{
	_mass = mass;
}
void Object::setInertia(float inertia)
{
	_inertia = inertia;
}
void Object::setAngVelocity(float angVelosity)
{
	_angularVelocity = angVelosity;
}

sf::Vector2f Object::getPosition()
{
	return _position;
}
sf::Vector2f Object::getRotation()
{
	return _rotation;
}
sf::Vector2f Object::getVelocity()
{
	return _velocity;
}
sf::Vector2f Object::getAcceleration()
{
	return _acceleration;
}
float Object::getMass()
{
	return _mass;
}
float Object::getInertia()
{
	return _inertia;
}
float Object::getAngVelocity()
{
	return _angularVelocity;
}