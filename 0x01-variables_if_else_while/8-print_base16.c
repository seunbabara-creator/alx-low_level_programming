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
	int d;
	char new;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (new = 'a'; new <= 'f'; new++)
		putchar(new);
	putchar('\n');
	return (0);
}
