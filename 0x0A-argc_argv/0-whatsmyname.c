#include <stdio.h>
/**
 * main - prints its name.
 * @argc: the number of the cl arguments.
 * @argv: cl arguments.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
