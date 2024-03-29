#include "monty.h"

/**
* pint - prints the value at the top of the stack,
* followed by a new line
* @head: pointer to top of the stack
* @counter: line_number
*
* Return: void
*/
void pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
