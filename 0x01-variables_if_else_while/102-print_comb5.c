#include<stdio.h>
/**
 * main - An entry point
 *
 * Return: When 0 (Success)
 */
int main(void)
{
int i;
int k;
int j;
int l;

for (i = '0'; i <= '9'; i++)
{
	for (j = '0'; j <= '9'; j++)
	{
		l = j + 1;
		for (k = i; k <= '9'; k++)
		{
			for (; l <= '9'; l++)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(k);
				putchar(l);
				if (i != '9' || j != '8' || k != '9' || l != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			l = '0';
		}
	}
}
putchar('\n');
return (0);
}
