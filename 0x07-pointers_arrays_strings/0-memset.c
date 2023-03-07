#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
