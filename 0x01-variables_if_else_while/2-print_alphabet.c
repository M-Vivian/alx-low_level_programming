#include <stdio.h>

/**
 *main - print the alphabet in lowercase
 *
 * Use the putchar input
 *
 * Return: always 0
 */
int main(void)
{
	int c = 97;

	while (c <= 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
