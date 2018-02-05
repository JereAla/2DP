#pragma once
#ifndef AABB_H
#define AABB_H

#include <Circle.h>

struct Vec2
{
	int x, y;
};

struct AABB
{
	Vec2 min;
	Vec2 max;
};

bool AABB_Check(AABB a, AABB b)
{
	if (a.max.x < b.min.x || a.min.x > b.max.x) return false;
	if (a.max.y < b.min.y || a.min.y > b.max.y) return false;

	return true;
}
//make own header for functions below?
float Distance(Object a, Object b)
{
	//search lower object position
	float dx = a.getPosition().x < b.getPosition().x ? a.getPosition().x : b.getPosition().x;
	float dy = a.getPosition().y < b.getPosition().y ? a.getPosition().y : b.getPosition().y;

	return dx + dy;
}

//used for circle vs circle collision check
bool CircleCollision(Circle a, Circle b)
{
	//ok?
	return a.getRadius() + b.getRadius() >= Distance(a, b) ? true : false;
}
#endif