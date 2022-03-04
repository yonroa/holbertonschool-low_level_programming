#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _isdigit(char *c);
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Lenght of argc
 * @argv: Array of size argc
 *
 * Return: 0 if the sum is right or 1 if is not
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int tot = atoi(argv[1]);

	if (tot < 0)
		printf("0\n");

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (tot >= 25)
		tot -= 25, num++;
	while (tot >= 10 && tot < 25)
		tot -= 10, num++;
	while (tot >= 5 && tot < 10)
		tot -= 5, num++;
	while (tot >= 2 && tot < 5)
		tot -= 2, num++;
	while (tot >= 1 && tot < 2)
		tot -= 1, num++;
	printf("%d\n", num);
	return (0);
}
