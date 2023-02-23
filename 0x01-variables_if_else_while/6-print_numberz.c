#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * You can only use putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		putchar(q + '0');
	}
	putchar('\n');
	return (0);
}
