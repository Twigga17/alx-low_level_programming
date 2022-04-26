#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function return len
 * @h: pointer
 *
 * Return: size_t length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
