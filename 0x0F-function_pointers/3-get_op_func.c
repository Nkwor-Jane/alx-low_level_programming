#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects correct funtion
 * to perform the operation asked
 * @s: operator passed as argument to program
 * Return: something
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
