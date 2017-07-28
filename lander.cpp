#include "lander.h"

void Lander::draw()
{
	drawLander(position);
	if (velocity.getDy() > 0.0)
	{
		drawLanderFlames(position, true, true, false);
	}
	else if (velocity.getDy() < 0.0)
	{
		drawLanderFlames(position, false, true, false);
	}
}


int Lander::hit()
{
	hp--;
	if (hp > 0)
	{
		return 1;
	}
	else if (hp == 0)
	{
		return 5;
	}
}