#include "main.h"

/**
 * _strncpy -> for copying purpose
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
