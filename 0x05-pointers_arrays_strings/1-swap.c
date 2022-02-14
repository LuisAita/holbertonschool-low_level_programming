#include "main.h"

/**
 * swap_int -  swaps value
 * @a : 1st variable
 * @b : 2nd var
 */

void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;

}
