#include<stdio.h>
/**
* main - Entry point
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;
	int b;
	long int l;
	long long int ll;
	float f;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(l));
	printf("Size of a long Long int: %lu byte(s)\n",(unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}

