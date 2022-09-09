#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	char exempt, e, q;

	e = 'e';
	q = 'q';

	for ( exempt = 'a'; exempt <= 'z'; exempt++)
	{
		if ( exempt != e && exempt != q)
			putchar(exempt);
	}
	putchar('\n');
	return (0);
}
