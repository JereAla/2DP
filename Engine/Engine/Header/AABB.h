#pragma once
#ifndef AABB_H
#define AABB_H

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
#endif