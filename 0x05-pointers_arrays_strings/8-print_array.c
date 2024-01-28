#include "main.h"
#include <stdio.h>

/*
 * Prints the first n elements of an array
 * n represents the number of elements to be printed
 * a is the array element
 */

void print_array(int *a,int n)
{
	int idx;
	if (n > 0)
	{
		for (idx = 0; idx < n-1; idx++)
		{
			printf("%d, ", *(a + idx));
		}
		printf("%d\n", *(a+n-1));
	}
	else
	{
		_putchar('\n');
	}
}
