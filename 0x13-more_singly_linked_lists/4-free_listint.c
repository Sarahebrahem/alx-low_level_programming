#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head node of the list
 *
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
