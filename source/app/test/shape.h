#ifndef SHAPE_H
#define SHAPE_H
#include <stdint.h>
struct Shaptb;
typedef struct
{
	struct Shaptb const * pointer;
	int16_t x;
	int16_t y;
} Shape;

struct Shaptb{
	uint32_t (*area)(Shape const * const me);
	void (*draw)(Shape const * const me);
};

void shape_ctor(Shape * const me, int16_t x, int16_t y);
void shape_move(Shape *const me, int16_t dx, int16_t dy);
int16_t getX(Shape const *const me);
int16_t getY(Shape const *const me);

static inline uint32_t Shape_area(Shape const * const me){
	return (*me->pointer->area)(me);
}

static inline void Shape_draw(Shape const * const me){
	(*me->pointer->draw)(me);
}

Shape const *largestS(Shape const *shapes[], uint32_t nShapes);
void drawShape(Shape const * shapes[], uint32_t nS);
#endif
