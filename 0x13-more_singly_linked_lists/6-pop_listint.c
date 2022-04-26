#include "lists.h"

/**
 * pop_listint - function that deletes the new head nodo
 * @head: head node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if (!*head)
		return (0);

	num = (*head)->n;
	*head = new->next;
	free(new);
	return (num);
}
