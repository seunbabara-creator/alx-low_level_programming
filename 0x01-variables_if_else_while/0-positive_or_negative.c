#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints out a random number, checks if the number is positive or negative and then prints a message
 * Retuen : Always 0 (Sucess)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}

	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	else
	{
		printf("%i is zero\n", n);
	}

	return (0);
}
