#include "main.h"
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: point to array
 * @n: numbers of array elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
}
