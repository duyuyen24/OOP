#ifndef DOG_H
#define DOG_H

#include<stdint.h>
#include "animal.h"

typedef struct{
	Animal super;
	uint16_t age;
	uint16_t weight;
}Dog;

extern void dog_ctor(Dog * const me, uint16_t age, uint16_t w);
#endif // DOG_H
