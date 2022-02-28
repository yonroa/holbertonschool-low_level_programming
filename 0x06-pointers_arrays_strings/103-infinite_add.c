#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum1[i];
	int sum2[u];
	int sum3[size_r];
	int i;
	int u;
	int h;
	int j;
	int k;

	while (n1[i] != '\0')
		i++;
	while (n2[u] != '\0')
		u++;
	for (h = 0; h <= i; h++)
	{
		sum1[h] = n1[h] - '0';
	}
	for (j = 0; j <= u; j++)
	{
		sum2[h] = n2[h] - '0';
	}
	sum3 = sum1 + sum2;
	while (sum3[k] != '\0')
	{
		h++;
	}
	if (h <= size_r)
	{
		return (sum3);
	}
	return (0);
}
