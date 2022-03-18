#include "variadic_functions.h"

/**
 * print_strings - Print the strings of the parameters
 * @separator: Character to separate the strings
 * @n: Number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				if (str)
					printf("%s%s", str, separator);
				else
					printf("(nil)%s", separator);
			}
			else
			{
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
			}
		}
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(args);
}
