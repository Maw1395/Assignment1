#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
	double damage = hitPoints;
	if (armor > 0 && armor < 20)
		return damage;
	else if (damage < 0) {
		return 0;
	}
	else if (damage-armor<0)
		return 0;
	return damage-armor;
}
