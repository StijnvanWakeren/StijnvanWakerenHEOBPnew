#include "Particle2.h"



Particle2::Particle2()
{
}

void Particle2::move()
{
	//Lifetime
	if (lifetime > 0)
	{
		lifetime -= 1;
	}
	radius = (lifetime / 60);

	//Random movement
	force += ofVec2f(ofRandom(-0.5, 0.5), ofRandom(-0.5, 0.5));

	//Physics
	speed += force;
	location += speed / 2;
	speed = speed / 1.01;
	force = ofVec2f(0, 0);
}
