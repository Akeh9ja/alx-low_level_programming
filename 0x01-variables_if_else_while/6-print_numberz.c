#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints all all numbers from 0 -10,
 * with the putchar only
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
