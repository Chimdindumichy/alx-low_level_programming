#include "main.h"

/**
 * swap_int - data type
 * @a: 1st pointer storing a value 5.
 * @b: 2nd pointer storing a value 8.
 * swap the valueof wo int.
 */

void swap_int(int *a, int *b)
{
	int pr = 13;
	int pr2 = 8;

	a = &pr;
	b = &pr2;
	b = a;
	a = b;
}
