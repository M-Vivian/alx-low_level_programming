#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * You can only use the putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
