#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "flying.h"
#include <iostream>
#include "uiInteract.h"
#include "uiDraw.h"

#define BULLET_SPEED 10.0

class Bullet : public Flying
{
private:

public:
	Bullet();

	void draw();
	void fire(Point position, float angle);
};