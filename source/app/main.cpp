#include <iostream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/signal.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <semaphore.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <sstream>
#include <iostream>
/*
#include "rectangle.h"
#include "circle.h"
*/
#include "dog.h"
#include "pig.h"
using namespace std;

int main() {
	//ex1
/*
	rectangle r1, r2;
	circle c1, c2;
	Shape const *shapes[] = {
		&c1.super,
		&r2.super,
		&c2.super,
		&r1.super};
	Shape const *s;
	uint32_t nS = sizeof(shapes) / sizeof(shapes[0]);
	rectangle_ctor(&r1, 0, 2, 10, 15);
	rectangle_ctor(&r2, -1, 3, 5, 8);

	circle_ctor(&c1, 1, -2, 12);
	circle_ctor(&c2, 1, -3, 6);

	s = largestS(shapes, nS);
	printf("largetsShape s(x=%d,y=%d)\n", getX(s), getY(s));

	drawShape(shapes, nS);
*/

	//ex2

	Dog a1;
	Pig a2;
	Animal const *shapes[] = {
		&a1.super,
		&a2.super,};
	uint32_t nS = sizeof(shapes) / sizeof(shapes[0]);
	dog_ctor(&a1, 1, 10);
	pig_ctor(&a2, 2, 20);
	drawShape(shapes, nS);

	return 0;
}



