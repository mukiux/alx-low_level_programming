#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h, *temp;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

	if (temp < current)
	break;
	}

	*h = NULL;
	return (count);
}

