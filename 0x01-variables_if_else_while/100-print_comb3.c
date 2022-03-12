#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints all possible combination of two numbers
 * and in ascending order
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)

	{
		for (m = 49; m <= 57; m++)
		{
			if (m != n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 && m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
