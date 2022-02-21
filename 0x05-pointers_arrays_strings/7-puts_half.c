#include "main.h"

/**
 * puts_half - Print the second half of an string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;

	if (i % 2 == 0)
	{
		int u = 0;

		while (u <= i)
		{
			if (u >= i / 2)
			{
				_putchar(str[u]);
			}
			u++;
		}
	}
	else
	{
		int u = 0;

		while (u <= i)
		{
			if (u >= (i - 1) / 2)
			{
				_putchar(str[u]);
			}
			u++;
		}
	}
	_putchar ('\n');
}			
