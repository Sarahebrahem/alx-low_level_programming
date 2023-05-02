#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to head node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
