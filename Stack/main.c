#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct
{
	int top;
	int capacity;
	char array[SIZE][SIZE];
}stack;

int initialize (stack* s)
{
	memset(s->array, 0, sizeof(char)*SIZE*SIZE);
	s->capacity=SIZE;
	s->top=0;
	return 0;
}

int empty(stack* s)
{
	return s->top == 0;
}

int full(stack* s)
{
	return s->top == s->capacity - 1;
}

int pop(stack* s, char* val)
{
	char* tmp;
	if (!empty(s))
	{
		tmp=s->array[--(s->top)];
		strcpy(val,tmp);
		return 1;
	}
	printf("Error!!!\n");
	return 0;
}

int push(stack* s, char* item)
{
	if (!full(s))
	{
		strcpy(s->array[s->top++],item);
		s->top++;
		return 1;	
	}
	return 0;
}

int peek (stack* s)
{
	return s->array[(s->top)-1];
}

int print(stack* s)
{
	int i;
	printf("Stack: \n");
	printf("------\n");
	printf("Size: %d\n", s->capacity);
	printf("Top: %d\n", s->top);
	
	if(empty(s))
	{
		printf("The stack is empty");
	}
	
	for(i=s->top-1; i>=0; i--)
	{
		printf("-> %s\n", s->array[i]);
	}
	return 0;
}

int main(){
	stack s;
	initialize(&s);
	push(&s,"http://google.com");
	push(&s,"http://facebook.com");
	push(&s,"http://youtube.com");
	print(&s);
	return 0;
}
