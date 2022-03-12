#include <stdio.h>
#include <stdlib.h>

/**
 * main-print the reverse side of
 * alphabets
 * Return:Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
