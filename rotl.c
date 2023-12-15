#include "monty.h"

/**
* rotl- rotates the stack to the top
* @head: pointer to top of the stack
* @counter: line_number
*
* Return: void
*/
void rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *tmp2;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	tmp2 = (*head)->next;
	tmp2->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = tmp2;
}

