#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index index of a listint_t ll
* @head: pointer to head node
* @index: position of node that should be deleted
* Return: 1 if success, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *rmNode;
	unsigned int i;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	rmNode = temp->next;
	temp->next = rmNode->next;
	free(rmNode);
	return (1);
}

