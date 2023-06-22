#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
		(void) stack;
		(void) line_number;
}
int _push(stack_t **head, unsigned int line_number, char *operand)
{
		stack_t *newnode = NULL;
		int exit_code = EXIT_SUCCESS;

		newnode = malloc(sizeof(stack_t));

		if (newnode == NULL)
		{
				fprintf(stderr, "Error: malloc failed\n");
				exit_code = EXIT_FAILURE;
		}
		else
		{
				if (operand == NULL || isdigits(operand) == 0)
				{
						fprintf(stderr, "L%d: usage: push integer\n", line_number);
						exit_code = EXIT_FAILURE;
						free(newnode);
				}
				else
				{
						newnode->n = atoi(operand);
						newnode->prev = NULL;
						newnode->next = *head;
						*head = newnode;
				}
		}

		return (exit_code);
}

int isdigits(char *operand)
{
		int i = 0, exit_code = 1;

		while (operand[i] != '\0')
		{
				if (isdigit(operand[i]))
				{
						i++;
						continue;
				}
				exit_code = 0;
				break;
		}
		return (exit_code);
}
