#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first param
 * @b: second param
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first param
 * @b: second param
 *
 * Return: difference bwt a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first param
 * @b: second param
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the divisons of two numbers
 * @a: first param
 * @b: second param
 *
 * Return: result  of divison of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of two integers
 * @a: first param
 * @b: second param
 *
 * Return: remainder of division a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
