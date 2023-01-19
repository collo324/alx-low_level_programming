#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: char to display
 * @f: A pointer function
 * author: emmanuel lekishon
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is Null */
		return;

	f(name);
}
