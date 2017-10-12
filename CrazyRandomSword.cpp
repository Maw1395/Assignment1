#include <stdlib.h> 
#include <time.h> 
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));
	int damage = rand()%90+10;
	int temparm=armor/2;
	temparm= rand()%temparm;
	armor = temparm;
	if(damage-armor<0)
		return 0;
	return damage-armor;
}