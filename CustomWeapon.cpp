#include "CustomWeapon.h"
#include <stdlib.h> 
#include <time.h> 
/*Weapon Proposal
The Weapon will always hit
The Weapons Damage cannot regularly Exceed 30
The Weapon cannot hit for less than 10
Thw Weapon, on a crit, 1 in 25 chance, will hit for 200 hit points*/
double CustomWeapon::hit(double armor) {
	srand(time(NULL));
	int random = rand() % 25;
	double damage = hitPoints;
	if (random == 0)
		return 200;
	else if (armor > damage+10)
		return 10;
	else if (damage < armor+30) 
		return 30;
	return damage-armor;
}