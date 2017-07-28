#include "flying.h"

Flying::~Flying()
{

}

void Flying::advance()
{
	position.addX(velocity.getDx());
	position.addY(velocity.getDy());
}