#include "main.h"

/**
 * reverse_array - reverse array
 * @num1: array
 * @num2: number
 * Return: value
 */

void reverse_array(int *num1, int num2)
{
	int x;
	int y;

	for (x = 0; x < num2--; x++)
	{
		y = num1[x];
		num1[x] = num1[num2];
		num1[num2] = y;
	}

}
