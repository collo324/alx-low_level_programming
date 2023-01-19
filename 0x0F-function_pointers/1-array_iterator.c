#include <stdio.h>
#include "function_pointers"
/**
 * array_iterator - calls a function to act
 * @array: Name of the array
 * @size: size of the passed array
 * @action: the function that acts on array
 * Author: emmanuel lekishon
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
