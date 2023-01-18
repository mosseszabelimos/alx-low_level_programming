#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 * @s: The operator passed as argument.
 * Return: value 0 or 1 
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
		};
	int x = 0;

	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;
	return (ops[x].f);
}
