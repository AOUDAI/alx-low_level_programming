#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: the string.
 *
 * Return: the string encoded.
 */
char *rot13(char *s)
{
	char o[] = "abcdefghijklmnopqrstuvwxyzABCDEFGhIHKLMNOPQRSTUVWXYZ";
	char t[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == o[j])
			{
				s[i] = t[j];
				break;
			}
		}
	}
	return (s);
}
