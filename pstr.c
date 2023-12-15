#include "monty.h"

/**
 * pstr - prints the contents of a stack_t stack as a string
 * @head: pointer to the stack
 * @line_cnt: line counter for error messages
 *
 * Return: nothing
 */
void pstr(stack_t **head, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *current = *head;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
