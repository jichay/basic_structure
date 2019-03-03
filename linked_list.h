#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/**
 * \struct 
 * \brief node that compose linked list
 */
struct node
{
	int value; /*!< Value of node (can be replace by anything). */
	struct node *next; /*!< Pointer to the next node */
};
typedef struct node node;

/**
 * @brief Create new node.
 * @param value value that will be put in the structure.
 * @return Pointer to the new created node.
 */
node * create_node(int value);

/**
 * @brief Add a new node to list a the end.
 * @param list The list where to add the new node.
 * @param add New node to add.
 * @return Pointer to the head of the list.
 */
node * add_at_queu(node *list, node *add);

/**
 * @brief Add a new node to list a the head of the list.
 * @param list The list where to add the new node.
 * @param add New node to add.
 * @return Pointer to the head of the list.
 */
node * add_at_head(node *list, node *add);

/**
 * @brief Print the given list.
 * @param list List to print.
 */
void print_list(node *list);

/**
 * @brief Recursive version of print_list
 * @param list List to print.
 */
void print_list_rec(node *list);

/**
 * @brief Search the node with the given value(first occurence).
 * @param list List where to search node.
 * @param searched_value Value to search in the list.
 * @return Pointer to the node found.
 */
node * search_node(node *list, int searched_value);

/**
 * @brief Remove a node from the given list.
 * @param list List where to remove the node.
 * @param del Pointer to the node to remove. 
 * @return Pointer to the head of the list.
 */
node * remove_node(node *list, node *del);

/**
 * @brief Free the entire list.
 * @param list List to free.
 */
void free_list(node *list);


#endif