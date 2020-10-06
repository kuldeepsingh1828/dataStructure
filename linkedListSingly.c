#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *start;
struct Node *first;
struct Node *second;
struct Node *third;
void display()
{
	struct Node *temp = start;
	while(temp!=NULL)
	{
		printf("%d  -->  ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
int main()
{

	start=first=second=third=NULL;
	first = malloc(sizeof(struct Node)); //MEMORY ALLOCATION
	second = malloc(sizeof(struct Node)); //MEMORY ALLOCATION
	third = malloc(sizeof(struct Node)); //MEMORY ALLOCATION
	if (first==NULL)
	{
		printf("MEMORY NOT ALLOCATED...\n");
	}
	if (second==NULL)
	{
		printf("MEMORY NOT ALLOCATED...\n");
	}
	if (third==NULL)
	{
		printf("MEMORY NOT ALLOCATED...\n");
	}
	first->data = 50;
	second->data = 20;
	third->data = 10;
	first->next = second;
	second->next = third;
	third->next = NULL;
	start = first;
	display();
}