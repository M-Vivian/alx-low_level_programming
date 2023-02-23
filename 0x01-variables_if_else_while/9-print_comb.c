#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Numbers must be separated by ,, followed by a space
 *
 *Numbers should be printed in ascending order
 *
 *You can only use putchar four times maximum in your code
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int q;

	for (q = '0'; q <= '9' ; q++)
	{
		putchar(q);

		if (q != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
