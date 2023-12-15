#include "monty.h"

/**
* rotl - rotates the first element of the stack
* @head: pointer to the stack
* @line_number: line count
*
* Return: void
*/
void rotl(stack_t **head, unsigned int line_number)
{
	stack_t *left;
	stack_t *right;

	(void) line_number;
	if (!head || !*head || !(*head)->next)
		return;

	left = right = *head;

	while (right->next)
		right = right->next;
	right->next = left;
	left->prev = right;
	*head = left->next;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
}
