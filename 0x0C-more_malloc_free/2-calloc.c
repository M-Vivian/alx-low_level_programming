#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using
 *
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
