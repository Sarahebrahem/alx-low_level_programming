#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *previous_node;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	previous_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (previous_node == NULL || previous_node->next == NULL)
			return (-1);
		previous_node = previous_node->next;
	}

	current_node = previous_node->next;
	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
