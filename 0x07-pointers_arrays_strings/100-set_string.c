#include "main.h"

/**
 * set_string - a function that sets value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer to a char
 * Return: value 1 or 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}

