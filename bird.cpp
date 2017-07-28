#include "bird.h"
#define BIRD_RADIUS 7.5

void Bird::draw()
{
	drawCircle(position, BIRD_RADIUS);
}

int Bird::hit()
{
	hp--;
	return 1;
}