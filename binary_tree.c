#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

tnode * create_tnode(int val){
	tnode * n = NULL;
	n = (tnode*)malloc(sizeof(tnode));
	if(n == NULL) return NULL;
	n->lnext = NULL;
	n->rnext =NULL;
	n->value = val;
	return n;
}

tnode * add_tnode(tnode *root, tnode *add){
	tnode *head = root;
	if(root == NULL) return add;
	while(root != NULL){
		if(add->value > root->value){
			if(root->rnext == NULL){
				root->rnext = add;
				return head;
			}
			root = root->rnext;
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

tnode * add_tnode_rec(tnode *root, tnode *add){
    if (root == NULL) return add; 
    if (add->value > root->value) 
        root->rnext  = add_tnode_rec(root->rnext, add); 
    else 
        root->lnext = add_tnode_rec(root->lnext, add);    
    return root; 
}

//TODO
//implement with stack the tree browse
void print_tree(tnode *root){
	
}

void print_tree_rec(tnode *root){
	if(root != NULL){
		printf("(");
		print_tree_rec(root->lnext);
		printf("%d",root->value);
		print_tree_rec(root->rnext);
		printf(")");
	}
}

tnode * search_tnode(tnode *root, int searched_value){
	while(root != NULL){
		if(searched_value == root->value) return root;
		else if(searched_value > root->value) root = root->rnext;
		else root = root->lnext;
	}
	return NULL;
}

void free_tree(tnode *root){
	if(root != NULL){
		free_tree(root->lnext);
		free_tree(root->rnext);
		free(root);
	}
}