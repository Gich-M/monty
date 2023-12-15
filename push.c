#include "monty.h"
/**
 * push - fuction pushes element to stack top
 * @stack: pointer to the stack
 * @line_number: line number
 * Return: void
*/

void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n\t");

	if (!arg || !isdigit(*arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (add_node(stack, atoi(arg)) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
