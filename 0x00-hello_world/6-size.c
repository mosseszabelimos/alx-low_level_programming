#include<stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	char c;
	int b;
	long int l;
	long long int ll;
	float f;
	printf("The size of a char: %lu byte(s)\n", sizeof(c));
	printf("The size of a int: %lu byte(s)\n", sizeof(b));
	printf("The size of a Long int: %lu byte(s)\n", sizeof(l));
	printf("The size of a Long Long int: %lu byte(s)\n", sizeof(ll));
	printf("The size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}

