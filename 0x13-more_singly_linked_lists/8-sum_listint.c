#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: the head.
 * Return: Always (0) success.
 */
int sum_listint(listint_t *head)
{
	unsigned int res = 0;
	
	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
