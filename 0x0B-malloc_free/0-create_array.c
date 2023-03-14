#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array
 * @c: initial value
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
