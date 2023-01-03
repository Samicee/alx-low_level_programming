#include "main.h"
/**
 * swap_int - swap the values of two int
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
