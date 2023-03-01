#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @str: string to get length
 * Return: Lengthof str
 */

int _strlen(char *s)

{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
