#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: tring to be appended upon
 * @src:  string to be completed at end of dest
 * @n: integer parameter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
