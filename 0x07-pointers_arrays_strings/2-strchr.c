#include "main.h"

/**
 * _strchr -> string character
 * @s: string given
 * @c: another char
 * Return: string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHELI*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /* return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);/* value null */
}

