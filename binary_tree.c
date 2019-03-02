#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

tnode * create_tnode(int val){
	tnode * n = NULL;
	n = (tnode*)malloc(sizeof(tnode));
	if(n == NULL) return NULL;
	n->lnext = NULL;
	n->gnext = NULL;
	n->value = val;
	return n;
}

tnode * add_tnode(tnode *root, tnode *add){
	tnode *head = root;
	if(root == NULL) return add;
	while(root != NULL){
		if(add->value > root->value){
			if(root->gnext == NULL){
				root->gnext = add;
				return head;
			}
			root = root->gnext;
		}else{
			if(root->lnext == NULL){
				root->lnext = add;
				return head;
			}
			root = root->lnext;
		}
	}
	return head;
}

void print_tree_rec(tnode *root){
	if(root != NULL){
		printf("(");
		print_tree_rec(root->lnext);
		printf("%d",root->value);
		print_tree_rec(root->gnext);
		printf(")");
	}
}

