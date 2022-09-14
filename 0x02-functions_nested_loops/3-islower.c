#include "main.h"
/**
 * _islower - checks if a character is in lower case
 * @c: An input character
 *
 * Return: 1 for lowercase 0 for uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
