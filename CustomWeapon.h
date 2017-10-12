

#include <string>
#include "Weapon.h"

#ifndef CUSTOMWEAPON_H
#define CUSTOMWEAPON_H


class CustomWeapon : public Weapon {
public:

	CustomWeapon() : Weapon(" Custom Weapon",50.0) {
	}
	virtual ~CustomWeapon() {};
	virtual double hit(double armor);

};

#endif /*CUSTOMWEAPON_H */

/**
* Defines the behavior of a  Custom Weapon (hitpoint = 40, ignores 20% of
* armor points)
*/
