#include "3-calc.h"

/**
 * main - It's a calculator for two numbers
 * @argc: Size of the array argv
 * @argv: Array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*num)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	num = get_op_func(argv[2]);
	if (!num)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", num(a, b));
	return (0);
}
