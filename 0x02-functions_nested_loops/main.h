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
