#include "function_pointers.h"

/**
  * int_index - searches fr an integer
  * @array: array containing elements
  * @size: number of elements in array
  * @cmp: function to compare values
  *
  * Return: void
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
