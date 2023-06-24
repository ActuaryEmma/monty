#include "monty.h"
/**
  * add_two - add two digits
  * @stack: pointer to the head of the list
  * @line_number: pointer
  * Return: EXIT SUCCESS else EXIT_FAILURE
  */
void add_two(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
/**
  * _add_two - add two digits
  * @head: pointer to the head of the list
  * @line_number: pointer
  * Return: EXIT SUCCESS else EXIT_FAILURE
  */
int _add_two(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int count = 0;
	int exit_code = EXIT_SUCCESS;
	int element1 = 0, element2 = 0;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit_code = EXIT_FAILURE;
	}

	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit_code = EXIT_FAILURE;
	}
	element1 = (*head)->n;
	element2 = (*head)->next->n;
	element2 = element1 + element2;
	(*head)->next->n = element2;
	(*head) = (*head)->next;
	free((*head)->prev);
	return (exit_code);
}
