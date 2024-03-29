#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min int
 * @max: max int
 *
 * Return:  newly created array
 */

int *array_range(int min, int max)
{
	int *block;
	int i, j = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			block[j] = i;
			j++;
		}
		return (block);
	}
	else
		return (NULL);

}
