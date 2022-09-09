#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry poit
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char twice;

	for (twice = 'a'; twice <= 'z'; twice++)
		putchar(twice);
	for (twice = 'A'; twice <= 'Z'; twice++)
		putchar(twice);
	putchar('\n');
	return (0);
}

