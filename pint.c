#include "monty.h"

/**
 * pint - opcode pint prints the value at the top of the stack a new line.
 * @head: Pointer to the stack.
 * @line_number: Line number of the instruction.
 * Return: void.
 */
void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number;
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
