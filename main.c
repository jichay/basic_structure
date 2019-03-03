#include <stdio.h>
#include <assert.h>
#include "linked_list.h"
#include "binary_tree.h"

int main(int argc, char **argv)
{
	/*node *list = NULL;
	list = add_at_queu(list,create_node(42));
	list = add_at_head(list,create_node(15));
	list = add_at_queu(list,create_node(53));
	print_list_rec(list);
	printf("\n");
	list = remove_node(list,search_node(list,15));
	print_list_rec(list);
	free_list(list);
	printf("\n");*/
	
	tnode *tree = NULL;
	tree = add_tnode_rec(tree,create_tnode(4));
	tree = add_tnode(tree,create_tnode(3));
	tree = add_tnode_rec(tree,create_tnode(2));
	tree = add_tnode(tree,create_tnode(7));
	tree = add_tnode_rec(tree,create_tnode(6));
	print_tree_rec(tree);
	printf("\nRoot=%d",tree->value);
	tnode *tmp = search_tnode(tree,3);
	
	printf("\n\n");
	if(tmp == NULL){
		printf("No value found\n");
	}else{
		printf("Found %d at %p\n",tmp->value,tmp);
	}
	printf("\nRoot=%d",tree->value);
	print_tree_rec(tmp);
	free_tree(tree);
	return 0;
}
