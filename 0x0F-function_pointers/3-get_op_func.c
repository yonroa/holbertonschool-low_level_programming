#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user
 * @s: Character to be compared
 * Return: The result of the operation
 * NULL if the character is not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
