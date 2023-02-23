#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  assign a random number to the variable n
 *
 * If the last digit of n is greater than 5
 *
 * If the digit of n is 0
 *
 * If the last digit is less than 6 and not 0
 *
 * Return: always 0
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else(last < 6 && != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
