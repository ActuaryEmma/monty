#include "monty.h"

void add_two(stack_t **stack, unsigned int line_number)
{
		(void) stack;
		(void) line_number;
}
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
    else
    {
        element1 = (*head)->n;
        element2 = (*head)->next->n;
        element2 = element1 + element2;
        *head = create_node(element2);
    }

    return (exit_code);
}

stack_t *create_node(int value) 
{
    stack_t* new_node = (stack_t*)malloc(sizeof(stack_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = value;
    new_node->next = NULL;

    return new_node;
}

