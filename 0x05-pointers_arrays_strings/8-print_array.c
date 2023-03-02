#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: Array of interger
 * @n: number of element
 * Return: void
 */

void print_array(int *a, int n)

{
	int x;

	for (x =0; x < n; a++)
	{
		printf("%d", a[x]);
		if (x != (n -1))
		{
			printf(", ");
		}
	}
}
