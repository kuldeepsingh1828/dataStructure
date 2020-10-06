#include <iostream>
#include <stdlib.h>
using namespace  std;
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
		cout<<temp->data<<" -->  ";
		temp = temp->next;
	}
	cout<<"NULL\n";
}
int main()
{

	start=first=second=third=NULL;
	first = new Node; //MEMORY ALLOCATION
	second = new Node; //MEMORY ALLOCATION
	third = new Node; //MEMORY ALLOCATION
	if (first==NULL)
	{
		cout<<"MEMORY NOT ALLOCATED...\n";
	}
	if (second==NULL)
	{
		cout<<"MEMORY NOT ALLOCATED...\n";
	}
	if (third==NULL)
	{
		cout<<"MEMORY NOT ALLOCATED...\n";
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