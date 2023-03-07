#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: bytes
 * @accept: other bytes
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
