#include "main.h"
#include <unistd.h>

/**
 * _putchar -  writes a single character to the stdout
 * @c: The character to be printed
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set properly.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
