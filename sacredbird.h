#pragma once
#include "bird.h"
#include "uiDraw.h"

class SacredBird : public Bird
{
public:
	SacredBird(Point position)
	{
		hp = 1;
		this->position = position;
		if (position.getY() > 0.0)
		{
			velocity.setDx(random(3.0, 7.0));
			velocity.setDy(random(-4.0, 0.0));
		}
		else if (position.getY() < 0.0)
		{
			velocity.setDx(random(3.0, 7.0));
			velocity.setDy(random(0.0, 5.0));
		}
	}

	virtual void draw();
	virtual int hit();
	virtual bool shouldLoop() { return false; }
};

