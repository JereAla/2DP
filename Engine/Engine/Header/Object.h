#pragma once
#ifndef Object_H
#define Object_H

#include <SFML\Graphics.hpp>

class Object
{
public:
	Object(sf::Vector2f pos = sf::Vector2f(0.f, 0.f),
			sf::Vector2f rot = sf::Vector2f(0.f, 0.f), float mass = 1);
	~Object();
	void Draw();
	void Move(sf::Vector2f);

	void setPosition(sf::Vector2f);
	void setRotation(sf::Vector2f);
	void setVelocity(sf::Vector2f);
	void setAcceleration(sf::Vector2f);
	void setMass(float);
	void setInertia(float);
	void setAngVelocity(float);

	sf::Vector2f getPosition();
	sf::Vector2f getRotation();
	sf::Vector2f getVelocity();
	sf::Vector2f getAcceleration();
	float getMass();
	float getInertia();
	float getAngVelocity();

private:
	sf::Vector2f _position;
	sf::Vector2f _rotation;	//only need for one rotation axis, because 2D?

	sf::Vector2f _velocity;
	sf::Vector2f _acceleration;

	float _mass;
	float _inertia;
	float _angularVelocity;
};
#endif
/*
	- add AABB variable to class??
*/
