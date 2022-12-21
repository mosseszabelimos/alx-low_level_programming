#include "main.h"

/**
 * leet - encode into 1337speak
 * @num: input value
 * Return: num value
*/


char *leet(char *num)
{
	int x, y;

	char ch1[] = "aAeEoOtTlL";
	char ch2[] = "4433007711";

	for (x = 0; num[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (num[x] == ch1[y])
			{
				num[x] = ch2[y];
			}
		}
	}
	return (num);
}

