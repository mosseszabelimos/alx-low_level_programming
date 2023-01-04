#include "main.h"

/**
 * _strlen_recursion - tells the legth of a string
 * @s: is the string
 * Return: value 1 or 0
 */

int _strlen_recursion(char *s)
{
	int str_len = 0;

	if (*s)
	{
		str_len = str_len + _strlen_recursion(s + 1);
		str_len++;
	}
	return (str_len);
}
