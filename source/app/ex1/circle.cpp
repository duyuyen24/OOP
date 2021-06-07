#include"circle.h"
#include<stdio.h>

static uint32_t Circle_area_(Shape const *const sh);
static void Circle_draw_(Shape const * const me);

void circle_ctor(circle * const circle, uint16_t x, uint16_t y, uint16_t r){
	static struct Shaptb const p = {
		&Circle_area_,
		&Circle_draw_
	};
	shape_ctor(&circle->super, x, y);
	circle->super.pointer = &p;
	circle->r = r;
}

static uint32_t Circle_area_(Shape const *const me){
	circle * me_ = (circle*)me;
	return 3U* (uint32_t)me_->r * (uint32_t)me_->r;
}

void Circle_draw_(Shape const * const me){
	circle *me_ = (circle*)me;
	printf("Rectangle_draw_(x=%d,y=%d,radius=%d)\n",me_->super.x, me_->super.y, me_->r);
}
