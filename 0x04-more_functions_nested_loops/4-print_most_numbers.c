#include "main.h"

/**
 * print_most_numbers - print numbers between 0 to 9
 * (neither 2 or 4)
 * Return: no return
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch != 2 && ch != 4)
			_putchar((ch % 10) + '0');
	}
	_putchar('\n');
}
