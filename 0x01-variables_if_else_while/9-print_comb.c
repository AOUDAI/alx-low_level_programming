#include<stdio.h>
/**
 * main - An entry point
 *
 * Return: When 0 (Success)
 */
int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
	putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
