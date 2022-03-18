#include "variadic_functions.h"

/**
 * print_numbers - Print the numbers in the parameters
 * @separator: Character to separate the numbers
 * @n: Number the parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%i%s", va_arg(args, int), separator);
			else
				printf("%i", va_arg(args, int));
		}
		else
			printf("%i", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
