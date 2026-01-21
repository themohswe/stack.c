#include <stdio.h>
#include "stack.h"

static int top = -1;
static int stack[MAX];
void push(int value) 
{
	if (top == MAX - 1) {
		printf("Stack is full!.\n");
	}else {
		top++;
		stack[top] = value;
		printf("Push the %d in the stack.\n And Stack index is %d\n", value, top);
	}
}

void pop() 
{
	if(top == -1) {
		printf("Stack is Empty!\n");
	}
	int pop_num = stack[top--];
	printf("The pop number is %d\n", pop_num);
}

void display() 
{
	if (top == -1) {
		printf("The stack is empty!. Nothing to show.\n");
	}else {
		for (int i = top; i >= 0; i--) {
			printf("The number are %d\t", stack[i]);
		}
	}
	printf("\n");
}

void peek() 
{
	if (top == -1) {
		printf("Stack is empty!.\n");
	}
	int current_top = stack[top];
	printf("%d\n",current_top);
}

int size() 
{
	int size;
	if (top == -1) {
		printf("Stack is empty!\n");
	}else {
		size = top + 1;
		printf("%d\n", size);
	}
	return size;
}

int main() {
	push(30);
	push(40);
	push(50);
	push(10);
	peek();
	size();
	return 0;
}