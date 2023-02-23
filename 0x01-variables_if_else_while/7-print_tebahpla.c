#include <stdio.h>

/**
 * main -  lowercase alphabet in reverse
 *
 * You can only use putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int q;

	for (q = 'z'; q >= 'a'; q--)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
