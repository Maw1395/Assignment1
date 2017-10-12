

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H


class SimpleAxe : public Weapon {
public:

	SimpleAxe() : Weapon("Simple axe", 60.0) {
	}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);

};

#endif /*SIMPLEAXE_H */

/**
* Defines the behavior of a common spear (hitpoint = 40, ignores 20% of
* armor points)
*/

