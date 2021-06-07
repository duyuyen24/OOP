#include"animal.h"
#include<assert.h>
#include<stdio.h>
static void Animal_draw_(Animal const * const me);
void animal_ctor(Animal *const me, uint16_t age, uint16_t w){
	static struct animal const p={
		&Animal_draw_
	};
	me->age = age;
	me->pointer = &p;
	me->weight = w;

}
uint16_t getAge(Animal * const me){
	return me->age;
}

uint16_t getW(Animal * const me){
	return me->weight;
}
static void Animal_draw_(Animal const * const me){
	assert(0);
}

void drawShape(Animal const * shapes[], uint32_t nS){
	uint32_t i = 0U;
	for(i = 0; i < nS; i ++){
		Animal_draw(shapes[i]);
	}
}

