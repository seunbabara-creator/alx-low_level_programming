#include "main.h"
/**
 * print_alphabet - prints the alphabet ten times over
 *
 * Return: nothing
*/
void print_alphabet_x10(void)
{
	char i;
	char n;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
