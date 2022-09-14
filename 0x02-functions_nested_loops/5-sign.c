#include "main.h"
/**
 * print_sign - check the code
 *  @n: An input number
 *
 * Return: 1 if the number is positive, 0 0r -0 otherwise
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
