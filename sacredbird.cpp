#include "sacredbird.h"
#define BIRD_RADIUS 18.0

void SacredBird::draw()
{
	drawSacredBird(position, BIRD_RADIUS);
}

int SacredBird::hit()
{
	hp--;
	return -10;
}