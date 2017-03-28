#include "particleReaper.h"



particleReaper::particleReaper()
{
}

void particleReaper::reap(vector<Particle*> particles)
{
	vector<Particle*>::iterator i = particles.begin();
	while (i != particles.end()) {

		bool alive = (*i)->checkIfAlive();

		if (alive = false)
		{
			particles.erase(i);
		}
		else
		{
			i++;
		}
	}
}
