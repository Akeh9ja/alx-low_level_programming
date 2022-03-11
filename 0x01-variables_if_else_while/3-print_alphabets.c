#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lowercase letters follow by uppercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
