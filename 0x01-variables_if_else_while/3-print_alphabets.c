#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	int cha1 = 97;
	int cha2 = 65;

	while (cha1 < 123)
	{
		putchar(cha1);
		cha1++;
	}
	while (cha2 < 91)
	{
		putchar(cha2);
		cha2++;
	}
	return (0);
}
