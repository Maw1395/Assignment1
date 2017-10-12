
#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H


class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy Random Sword", 60.0) {
	}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);


};

#endif /*CRAZYRANDOMSWORD_H */

/**
* Defines the behavior of a common spear (hitpoint = 40, ignores 20% of
* armor points)
*/
