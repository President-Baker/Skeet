#ifndef FLYING_H
#define FLYING_H
#include "velocity.h"
#include "point.h"

class Flying
{
protected:
	Velocity velocity;
	Point position;
	bool alive;

public:
	Flying() : alive(true) {};
	~Flying();

	Velocity getVelocity() { return velocity; }
	void setVelocity(Velocity velocity) { this->velocity = velocity; }

	Point getPoint() { return position; }
	void setPoint(Point position) { this->position = position; }

	bool isAlive() { return alive; }
	void kill() { alive = false; }

	void advance();
	void draw() {};
};

#endif