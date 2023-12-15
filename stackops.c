#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: pointer to top of the stack
*
* Return: void
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* stack - prints the top
* @head: pointer to top of the stack
* @counter: line_number
*
* Return: void
*/
void stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}

