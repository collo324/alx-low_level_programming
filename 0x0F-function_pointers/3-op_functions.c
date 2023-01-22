#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum
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
 * op_sub - sub
 * @a: first param
 * @b: second param
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product
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
 * op_div - division
 * @a: first param
 * @b: second param
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of divisions
 * @a: first param
 * @b: second param
 *
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
