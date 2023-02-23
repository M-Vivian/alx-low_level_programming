#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Use putchar only three times
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
