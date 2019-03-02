#ifndef BINARY_TREE_H
#define BINARY_TREE_H

/**
 * \struct 
 * \brief node that compose the binary tree
 */
struct tnode
{
	int value; /*!< Value of node (can be replace by anything). */
	struct tnode *lnext; /*!< Pointer to the next left node */
	struct tnode *gnext; /*!< Pointer to the next right node */
};
typedef struct tnode tnode;

/**
 * @brief Create new node.
 * @param value value that will be put in the structure.
 * @return Pointer to the new created node.
 */
tnode * create_tnode(int value);

/**
 * @brief Add a node, if the value is lower than the actrual node, we put it in left side otherwise in right side. 
 * @param tree Tree where to add the new node.
 * @param add Node to add to the tree.
 * @return Pointer to the first node of the tree.
 */
tnode * add_tnode(tnode *root, tnode *add);

/**
 * @brief Add a node, if the value is lower than the actrual node, we put it in left side otherwise in right side. 
 * @param tree Tree where to add the new node.
 * @param add Node to add to the tree.
 * @return Pointer to the first node of the tree.
 */
tnode * add_tnode_rec(tnode *root, tnode *add);


/**
 * @brief Print the given tree.
 * @param tree tree to print.
 */
void print_tree(tnode *root);

/**
 * @brief Recursive version of print_tree.
 * @param tree tree to print.
 */
void print_tree_rec(tnode *root);

#endif