#include "main.h"
/**
 * print_last_digit-To get the last digit of number.
 *
 *@n: to input the number as integer
 *
 * Return: the last digit.
 */
int print_last_digit(int n)
{
	int n;

	n = n % 10;
	if (n < 0)
	{
		_putchar(n + 48);
		return (-1);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
