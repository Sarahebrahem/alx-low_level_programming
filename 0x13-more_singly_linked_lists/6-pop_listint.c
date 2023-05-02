#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n)
 * @head: Pointer to a pointer to the head node of the list
 *
 * Return: The head node’s data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;
	n = current_node->n;
	*head = (*head)->next;
	free(current_node);

	return (n);
}
