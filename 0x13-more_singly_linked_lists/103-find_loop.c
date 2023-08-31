#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the address of the node where the loop starts.
 * @yogo: Pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *yogo)
{
	listint_t *bola = yogo, *speed = yogo;

	if (!yogo)
		return (NULL);

	while (bola && speed && speed->next)
	{
		speed = speed->next->next;
		bola = bola->next;
		if (speed == bola)
		{
			bola = yogo;
			while (bola != speed)
			{
				bola = bola->next;
				speed = speed->next;
			}
			return (speed);
		}
	}

	return (NULL);
}
