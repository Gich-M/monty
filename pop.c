#include "monty.h"

/**
 * pop - The opcode pop removes the top element of the stack.
 * @head: Pointer to the stack.
 * @line_number: Line number of the instruction.
 * Return: void.
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *node;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	node = *head;
	*head = (*head)->next;
	free(node);
}
