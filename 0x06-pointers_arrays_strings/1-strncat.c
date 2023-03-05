#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The string to be appendede
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to appended to dest
 * Return: A pointer to th resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
        dest_len++;
        for (index = 0; src[index] && index < n; index++)
        dest [dest_len++] = src[index];
        return (dest);
}
