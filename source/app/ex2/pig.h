#ifndef PIG_H
#define PIG_H
#include<stdint.h>
#include "animal.h"

typedef struct{
	Animal super;
	uint16_t age;
	uint16_t weight;
}Pig;

void pig_ctor(Pig *const me, uint16_t age, uint16_t w);
#endif // PIG_H
