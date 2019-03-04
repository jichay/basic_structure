#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // To get INT_MIN
#include "stack.h"


stack * create_stack(int size_stack){
	stack *s;
	s = (stack *)malloc(sizeof(stack));
	s->arr=(int *)malloc(sizeof(int)*size_stack);
	s->nb_elements=0;
	s->size_stack=size_stack;
	s->err_flag = 0;
	return s;
}

int stack_is_empty(stack *s){
	if(s->nb_elements == 0){
		return 1;
	}
	return 0;
}

int stack_is_full(stack *s){
	if(s->nb_elements == s->size_stack){
		return 1;
	}
	return 0;
}

int push(stack *s, int value){
	if(stack_is_full(s)){
		s->err_flag = 1;
		return INT_MIN;
	}
	s->arr[s->nb_elements] = value;
	s->nb_elements++;
	s->err_flag = 0;
	return value;
}

int pop(stack *s){
	if(stack_is_empty(s)){
		s->err_flag = 1;
		return INT_MIN;
	}
	s->nb_elements--;
	s->err_flag = 0;
	return s->arr[s->nb_elements];
}

void print_stack(stack *s){
	int i = 0;
	if(!stack_is_empty(s)){
		for(i = 0; i < s->nb_elements; i++){
			printf("|%d",s->arr[i]);
		}
	}
}