#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<stdint.h>
#include "test/shape.h"

typedef struct {
	Shape super;
	uint16_t w;
	uint16_t h;
}rectangle;

extern void rectangle_ctor(rectangle * const me, uint16_t x, uint16_t y, uint16_t w, uint16_t h);

#endif
