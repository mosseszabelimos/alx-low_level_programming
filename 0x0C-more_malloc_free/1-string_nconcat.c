#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates  bytes of a string to anothe
 * @s1: first entry
 * @s2: second entry
 * @n: third entry
 * Return: value 0 or 1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int x = 0, y = 0, num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		num2++;
	if (n < num2)
		z = malloc(sizeof(char) * (num1 + n + 1));
	else
		z = malloc(sizeof(char) * (num1 + num2 + 1));
	if (!z)
		return (NULL);
	while (x < num1)
	{
		z[x] = s1[x];
		x++;
	}
	while (n < num2 && x < (num1 + n))
		z[x++] = s2[y++];
	while (n >= num2 && x < (num1 + num2))
		z[x++] = s2[y++];
	z[x] = '\0';
	return (z);
}
