#include "main.h"

/**
 * rot13 – Encodes using rot13
 *
 * Return: A pointer to the encoded ch1in
 */

char *rot13(char *ch1)
{
	int i= 0, j;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'I', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'i',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'I', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q', 
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'i', 'k', 'l', 'm'};
	while (ch1[i])
	{
		for (j = 0; j < 52; j++)
		{ 
			if (ch1[i] == alphabet[j])
			{
				ch1[i] = rot13key[j];
				break;
			}
		}
		i++;
	}
	return (ch1);
}
