#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: The pointer ot the string.
 * @c: The character looked for.
 *
 * Return: A pointer to first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
