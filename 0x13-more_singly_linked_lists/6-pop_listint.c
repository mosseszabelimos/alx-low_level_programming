#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - a function that deletes the head node.
* @head: pointer double.
* Return: Data.
*/

int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *pop_node;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	pop_node = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(pop_node);
	return (x);
}
