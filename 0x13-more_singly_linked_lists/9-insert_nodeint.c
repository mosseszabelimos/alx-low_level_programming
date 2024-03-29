#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: the head.
 * @idx: index of list.
 * @n: the integer.
 * Return: nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *node, *node_temporal;

	if (!head && !*head)
		return (NULL);
	node_temporal = *head;
	if (idx == x)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		while (node_temporal)
		{
			if (idx == x + 1)
			{
				node = malloc(sizeof(listint_t));
				if (!node)
					return (NULL);
				node->n = n;
				node->next = node_temporal->next;
				node_temporal->next = node;
				return (node);
			}
			node_temporal = node_temporal->next;
			x++;
		}
	}
	return (NULL);
}

