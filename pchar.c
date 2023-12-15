#include "monty.h"

/**
 * pchar - prints the int at the top of the stack as char
 * @head: stack given by main
 * @line_number: amount of lines
 *
 * Return: void
 */
void pchar(stack_t **head, unsigned int line_number)
{
	if (!head || !(*head))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	if (isascii((*head)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*head)->n);
}
