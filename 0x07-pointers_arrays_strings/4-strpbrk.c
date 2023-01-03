#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive of s1 that is in s2
 * @s: source string
 * @accept: searching
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (s = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
