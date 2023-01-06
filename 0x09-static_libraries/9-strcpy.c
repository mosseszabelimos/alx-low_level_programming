#include "main.h"

/**
 * _strcpy - copies the string pointed by scr
 * @gate1: first variable
 * @gate2: copy
 * Return: return value
 */

char *_strcpy(char *gate1, char *gate2)
{
	char *s = gate1;

	while (*gate2 != '\0')
	{
		*gate1 = *gate2;
		gate1++;
		gate2++;
	}
	*gate1 = '\0';
	return (s);
}

