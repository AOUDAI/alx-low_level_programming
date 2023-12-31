#include "main.h"
/**
 * _strcat - concatenate two strings.
 * @dest: first string.
 * @src: second string.
 *
 * Return: The concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
