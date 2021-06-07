#ifndef CIRCLE_H
#define CIRCLE_H

#include "ex1/shape.h"
#include <stdint.h>

typedef struct {
	Shape super;
	uint16_t r;
}circle;

void circle_ctor(circle * const me, uint16_t r, uint16_t x, uint16_t y);
#endif
