#include "lists.h"

/**
 * free_listint_safe - can free lists with a loop
 * @h: double pointer assigned
 * Return: i
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i = 0;

	temp = *h;
	if (h == NULL)
		return (i);
	while (temp)
	{
		if (temp <= temp->next)
		{
			frree(temp);
			i++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
		i++;
	}
	*h = NULL;
	return (i);
}
