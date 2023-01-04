#include "main.h"
#include "2-strlen_recursion.c"
/**
 * is_palindrome - a function that tell if a string is a palindrome sequence
 * @c: first entry
 * Return: value 0 or 1
 */

int is_palindrome(char *c)
{
	if (*c == 0)
		return (1);
	return (chk_pal(c, 0, _strlen_recursion(c)));
}

/**
 * chk_pal - checks the characters are recursive palindrome
 * @st: to be chekced
 * @x: loop
 * @l: length
 * Return: return vlaue 1 or 0
 */

int chk_pal(char *st, int x, int l)
{
	if (*(st + x) != *(st + l - 1))
		return (0);
	if (x >= l)
		return (1);
	return (chk_pal(st, x + 1, l - 1));
}
