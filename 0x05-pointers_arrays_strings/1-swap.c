#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: THe second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two inegers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
