#include <stdio.h>
#include "linked_list.h"

int main(int argc, char **argv)
{
	
	node *list = NULL;
	list = add_at_queu(list,create_node(42));
	list = add_at_head(list,create_node(15));
	list = add_at_queu(list,create_node(53));
	print_list_rec(list);
	printf("\n");
	list = remove_node(list,search_node(list,15));
	print_list_rec(list);
	free_list(list); 
	return 0;
}
