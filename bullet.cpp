#include "bullet.h"

Bullet::Bullet()
{
	alive = true;
	
}

void Bullet::draw()
{
	drawDot(position);
}

void Bullet::fire(Point position, float angle)
{
	this->position = position;
	float aDX = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
	float aDY = BULLET_SPEED * (sin(M_PI / 180.0 * angle));
	velocity.setDx(aDX);
	velocity.setDy(aDY);
	advance();
}