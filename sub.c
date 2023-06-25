#include "monty.h"
/**
 * sub - function to subtract two top numbers
 * @stack: pointer to head of stack
 * @line_number: pointer to line of the file
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
/**
 * _sub - function to subtract two top numbers
 * @head: pointer to head of stack
 * @line_number: pointer to line of the file
 * Return: Exit Success else Exit failure
 */
int _sub(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int element1 = 0, element2 = 2, exit_code = EXIT_SUCCESS;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		return (EXIT_FAILURE);
	}
	temp = *head;
	element1 = (*head)->n;
	element2 = (*head)->next->n;
	element2 = element2 - element1;
	(*head)->next->n = element2;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
	return (exit_code);
}
