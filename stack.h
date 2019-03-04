#ifndef STACK_H
#define STACK_H

struct stack
{
    int *arr; /*!< Array of int that represent the stack (can be replace by anything). */
	int err_flag; /*!< Flag that represent the state of the last operation (push or pop). */
    int nb_elements; /*!< Number of element curretly in the stack. */
    int size_stack; /*!< Size of the stack. */
};
typedef struct stack stack;

/**
 * @brief Create a new stack.
 * @param size_stack Size of the new stack created.
 * @return Pointer to the new stack.
 */
stack * create_stack(int size_stack);

/**
 * @brief Tell if the given stack is empty or not.
 * @param s Pointer to the stack to check.
 * @return Integer 1 = empty and 0 = not empty.
 */
int stack_is_empty(stack *s);

/**
 * @brief Tell if the given stack if full or not.
 * @param s Pointer to the stack to check.
 * @return Integer 1 = full and 0 = not full.
 */
int stack_is_full(stack *s);

/**
 * @brief Push a value on the stack.
 * @param s Stack where to push the value.
 * @param value Value to push on the stack.
 * @return Value added if it succeeds or INT_MIN if it failed and the error flag will be set to 1.
 */
int push(stack *s, int value);

/**
 * @brief Pop the value on top of the stack.
 * @param s Stack where to pop the value.
 * @return Value poped if it succeeds or INT_MIN if it failed and the error flag will be set to 1. 
 */
int pop(stack *s);

/**
 * @brief Print the given stack.
 * @param s Stack to print.
 */
void print_stack(stack *s);

#endif