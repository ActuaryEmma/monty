#include "monty.h"

void free_list(stack_t **head)
{
		stack_t *temp = NULL;

		while (*head != NULL)
		{
				temp = (*head)->next;
				free(*head);
				*head = temp;
		}
}
