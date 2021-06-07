#include "pig.h"
#include <stdio.h>
static void Pig_draw_(Animal const * const me);
void pig_ctor(Pig * const pig, uint16_t age, uint16_t w)
{
	static struct animal const p={
		&Pig_draw_
	};
	animal_ctor(&pig->super, age, w);
	pig->super.pointer = &p;
	pig->age = age;
	pig->weight = w;
}

void Pig_draw_(Animal const * const me){
	Pig *const me_ = (Pig*)me;
	printf("Pig says: we we; Weight: %d\n", me_->super.weight);
}
