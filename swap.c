#include "monty.h"

/**
 * swap - function that swaps the top two elements in the stack.
 * @head: Pointer to the stack.
 * @line_number: Line number of the instruction.
 * Return: void.
 */
void swap(stack_t **head, unsigned int line_number)
{
	int n;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);

		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		exit(EXIT_FAILURE);
	}

	n = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = n;
}
