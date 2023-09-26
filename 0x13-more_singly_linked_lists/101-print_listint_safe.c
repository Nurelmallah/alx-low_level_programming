#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the beginning of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;
	size_t i;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		for (i = 0; i < node_count; i++)
		{
			if (current == head)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (node_count);
			}
			current = current->next;
		}
		current = head;
	}

	return (node_count);
}
