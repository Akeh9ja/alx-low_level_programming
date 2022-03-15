#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print all lower case letters ten times,
 * follow by new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int  i;

	i = 0;

	while (i < 10)
	{
		ch = 97;

		while (ch <= 122)
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
