#include "main.h"
/*
 * Swap the values of two integers
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
