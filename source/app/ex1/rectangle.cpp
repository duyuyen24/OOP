#include "rectangle.h"
#include <stdio.h>
static uint32_t Rec_area_(Shape const *const me);
static void Rec_draw_(Shape const * const me);

void rectangle_ctor(rectangle *const rectangle, uint16_t x, uint16_t y, uint16_t w, uint16_t h)
{
	static struct Shaptb const p = {
		&Rec_area_,
		&Rec_draw_
	};
	shape_ctor(&rectangle->super, x, y);
	rectangle->super.pointer = &p;
	rectangle->w = w;
	rectangle->h = h;
}

static uint32_t Rec_area_(Shape const *const sh){
	rectangle *const rec = (rectangle*)sh;
	return (uint32_t)rec->w * (uint32_t)rec->h;
}

void Rec_draw_(Shape const * const me){
	rectangle *const me_ = (rectangle*)me;
	printf("Rectangle_draw_(x=%d,y=%d,width=%d,height=%d)\n",me_->super.x,me_->super.y, me_->w, me_->h);
}
