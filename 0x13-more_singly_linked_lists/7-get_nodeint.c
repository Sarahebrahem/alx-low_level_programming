#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head node of the list
 * @index: Index of the node, starting at 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;

	current_node = head;
	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	if (i != index || current_node == NULL)
		return (NULL);

	return (current_node);
}
