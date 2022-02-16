#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if n is positive, negative or zero
 *
 * Return:0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else
	{
		printf("%i is zero\n", i);
	}
}

