#include "toughbird.h"
#define BIRD_RADIUS 15.0

void ToughBird::draw()
{
	drawToughBird(position, BIRD_RADIUS, getHP());
}

int ToughBird::hit()
{
	hp--;
	if (hp > 0)
	{
		return 1;
	}
	else if (hp == 0)
	{
		return 2;
	}	
}