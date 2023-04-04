#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sums up two numbers
  *
  * @a: integer 1
  * @b: integer 2
  *
  * Return: sum of numbers
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two integers
  *
  * @a: integer 1
  * @b: integer 2
  *
  * Return: value after subtraction
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies two integers
  *
  * @a: integer 1
  * @b: integer 2
  *
  * Return: value of multiplication
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Divides two intehers
  *
  * @a: integer 1
  * @b: integer 2
  *
  * Return: value of division
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Returns the remainder of the division of two numbers.
  *
  * @a: integer 1
  * @b: integer 2
  *
  * Return: modulus
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
