#include "shape.h"
#include<assert.h>
static uint32_t Shape_area_(Shape const *const me);
static void Shape_draw_(Shape const * const me);
void shape_ctor(Shape *const sh, int16_t x, int16_t y)
{
	static struct Shaptb const p={
		&Shape_area_,
		&Shape_draw_
	};
	sh->pointer = &p;
	sh->x = x;
	sh->y = y;
}

void shape_move(Shape *const sh, int16_t dx, int16_t dy)
{
	sh->x += dx;
	sh->y += dy;
}

int16_t getX(Shape const *const me)
{
	return me->x;
}

int16_t getY(Shape const *const me)
{
	return me->y;
}

static uint32_t Shape_area_(Shape const *const me){
	assert(0);
	return 0U;
}

static void Shape_draw_(Shape const * const me){
	assert(0);
}

Shape const *largestS(Shape const *shapes[], uint32_t nShapes){
	Shape const * sh = (Shape *)0;
	uint32_t max = 0U;
	uint32_t i = 0U;
	for(i = 0; i < nShapes; i++){
		uint32_t temp = Shape_area(shapes[i]);
		if(max < temp){
			max = temp;
			sh = shapes[i];
		}
	}
	return sh;
}

void drawShape(Shape const * shapes[], uint32_t nS){
	uint32_t i = 0U;
	for(i = 0; i < nS; i ++){
		Shape_draw(shapes[i]);
	}
}
