#include <stdio.h>

/**
 * main - print the alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	int cha = 97;

	while (97 < 123)
	{
		if ((cha != 101) && (cha != 113))
		{
			putchar(cha);
			cha++;
		}
		cha++;
	}
	putchar('\n');
	return (0);
}
