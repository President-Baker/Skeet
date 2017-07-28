#pragma once
#include "bird.h"
#include "uiDraw.h"

class ToughBird : public Bird
{
private:

public:
	ToughBird(Point position)
	{
		hp = 3;
		this->position = position;
		if (position.getY() > 0.0)
		{
			velocity.setDx(random(2.0, 5.0));
			velocity.setDy(random(-3.0, 0.0));
		}
		else if (position.getY() < 0.0)
		{
			velocity.setDx(random(2.0, 5.0));
			velocity.setDy(random(0.0, 4.0));
		}
	}

	virtual void draw();
	virtual int hit();
};

