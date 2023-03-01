#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: 1st interger swapped
 * @b: 2nd interger swapped
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
