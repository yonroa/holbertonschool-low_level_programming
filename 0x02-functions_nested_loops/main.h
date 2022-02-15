#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar(n);
		n++;
	}
}

void print_alphabet_x10(void)
{
	int u = 0;

	while (u <= 10)
	{
		print_alphabet;
		u++;
	}
}
