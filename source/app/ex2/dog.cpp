#include "dog.h"
#include <stdio.h>
static void Dog_draw_(Animal const * const me);
void dog_ctor(Dog *const dog, uint16_t age, uint16_t w)
{
	static struct animal const p={
		&Dog_draw_
	};
	animal_ctor(&dog->super, age, w);
	dog->super.pointer = &p;
	dog->age = age;
	dog->weight = w;
}

void Dog_draw_(Animal const * const me){
	Dog *const me_ = (Dog*)me;
	printf("Dog_draw:gau gau gau, Weight: %d\n", me_->super.weight);
}

