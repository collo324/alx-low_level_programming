#include "main.h"
/**
 * _puts_recursion -> this is a function to print string recursivly
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
