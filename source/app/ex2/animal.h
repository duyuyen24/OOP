#ifndef ANIMAL_H
#define ANIMAL_H
#include <stdint.h>
struct animal;
typedef struct{
	struct animal const * pointer;
	uint16_t age;
	uint16_t weight;
} Animal;
struct animal{
	void (*draw)(Animal const * const me);
};
void animal_ctor(Animal *const me, uint16_t age, uint16_t weight);
uint16_t getAge(Animal * const me);
uint16_t getW(Animal * const me);

static inline void Animal_draw(Animal const * const me){
	(*me->pointer->draw)(me);
}
void drawShape(Animal const * animals[], uint32_t nS);
#endif // ANIMAL_H
