#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#define DELIM " \t\n\r"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);

FILE *open_file(char *fileName);
int read_file(FILE *file);
void close_file(FILE *file);
int parse_line(stack_t **head, char *line, unsigned int line_number);
int _push(stack_t **head, unsigned int line_number, char *operand);
int caller(stack_t **head, char *opcode, char *operand, unsigned int line_number);
int isdigits(char *operand);
int _pall(stack_t **head);
void free_list(stack_t **head);
#endif
