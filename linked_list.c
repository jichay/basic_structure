#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

node * create_node(int val){
	node *n = NULL;
	n = (node*)malloc(sizeof(node));
	if(n == NULL) return NULL;
	n->next = NULL;
	n->value = val;
	return n;
}

node * add_at_queu(node *list, node *add){
	node *save_head = list;
	if(list == NULL) return add;
	while(list->next != NULL){
		list = list->next;
	}
	list->next = add;
	return save_head;
}

node * add_at_head(node *list, node *add){
	add->next = list;
	return add;
}

void print_list(node *list){
	while(list != NULL){
		printf("->%d",list->value);
		list = list->next;
	}
}

void print_list_rec(node *list){
	if(list != NULL){
		printf("->%d",list->value);
		print_list_rec(list->next);
	}
}

node * search_node(node * list, int searched_value){
	while(list != NULL){
		if(list->value == searched_value) return list;
		list = list->next;
	}
	return NULL;
}

node * remove_node(node *list, node *del){
	node *head = list;
	node *nm1 = NULL; // Node n-1 to change ->next
	if(del == NULL) return list;
	if(list == del){ // If del is the first element
		head = list->next;
		free(list);
		return head;
	}
	do{
		nm1 = list; // Save n-1 node
		list = list->next;
	}while(list != del);
	nm1->next = list->next; // Change ->next pointer to n+1 even if its NULL
	free(list);
	return head;
}

void free_list(node *list){
	node *tmp ;
    while(list != NULL) 
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}