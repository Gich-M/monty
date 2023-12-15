#include "monty.h"

/**
* pall - prints all the values on the stack,
* starting from the top of the stack
* @head: pointer to top of the stack
* @counter: line count, not used
*
* Return: void
*/
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
