//singly circular linked List
#include <iostream>
#include <stdlib.h>
using  namespace  std;
struct Node
{
	int data;
	struct Node  *next;
}*start,*node,*temp;
void display();
void insert(int data)
{
	node  = new Node;
	if (node==NULL)
	{
		cout<<"\nOveflow....\n";
	}
	else
	{
		node->data = data;
		node->next = NULL;
		if (start==NULL) // NO DATA
		{
			start=node;
			node->next = start;
		}
		else
		{
			temp = start;
			while(temp->next!=start)
			{
				temp =temp->next;
			}
			temp->next = node;
			node->next = start;
			start = node;
		}
		display();
	}
}
void display()
{
	if (start==NULL)
	{
		cout<<"\nUNDERFLOW...\n";
	}
	else if (start->next==start)
	{
		cout<<start->data<<" --> ";
	}
	else
	{
		temp = start;
		while(temp->next!=start)
		{
			cout<<temp->data<<" --> ";
			temp = temp->next;
		}
		cout<<temp->data;
	}
}
int main()
{
	start = NULL;
	int data,choice = 1;
	while(choice<=2)
	{
		cout<<"\n1. INSERT in CIRCULAR LINKED LIST";
		cout<<"\n2. DISPLAY in CIRCULAR LINKED LIST";
		cout<<"\n3. EXIT";
		cout<<"\nEnter the choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1 : 
					cout<<"\nEnter the Data : ";
					cin>>data;
					insert(data);
					break;
			case 2 : 
					display();
					break;
			default : cout<<"\nWrong Choice...\n";
		}
	}
}