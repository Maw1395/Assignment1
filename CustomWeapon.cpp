#include "CustomWeapon.h"
#include <stdlib.h> 
#include <time.h> 
#include <iostream>
/*Weapon Proposal
The Weapon will always hit
By default it hits with 50 on no armor
The Weapons Damage cannot regularly Exceed 30
The Weapon cannot hit for less than 10
Thw Weapon, on a crit, 1 in 25 chance, will hit for 200 hit points*/
double CustomWeapon::hit(double armor) {
	srand(time(NULL));
	rand();
	int randomnumber = rand() % 25;
	double damage = rand()%100;
	damage = floor(damage);
	if (randomnumber == 0)
	{
		return 200;
	}
	else if (armor > damage + 10)
	{
		return 10;
	}
	
	else if (damage > armor + 30)
	{
		return 30;
	}
		return damage-armor;
}