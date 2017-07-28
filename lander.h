#pragma once
#include "bird.h"
#include "uiDraw.h"

class Lander : public Bird
{
public:
	Lander(Point position)
	{
		hp = 8;
		this->position = position;
		if (position.getY() > 0.0)
		{
			velocity.setDx(random(2.0, 3.6));
			velocity.setDy(random(-3.0, 0.0));
		}
		else if (position.getY() < 0.0)
		{
			velocity.setDx(random(2.0, 3.6));
			velocity.setDy(random(0.0, 4.0));
		}
	}

	virtual void draw();
	virtual int hit();
};

