#ifndef BIRD_H
#define BIRD_H
#include "flying.h"
#include "uiDraw.h"

class Bird : public Flying
{
protected:
	int hp;

public:
	Bird() {}
	Bird(Point position)
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

	int getHP()
	{
		return hp;
	}

	virtual void draw();
	virtual int hit();
	virtual bool shouldLoop() { return true; }
};

#endif