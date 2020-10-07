//A program to sort a linked List
#include <iostream>
using namespace  std;
struct  Node
{
	int data;
	struct Node *next;
};
struct Node *start,*node,*temp,*Previous,*Next;
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

	start=node=NULL;
	char c = 'y';
	int count = 0;
	while(c=='y' || c=='Y')
	{
		int data;
		cout<<"Enter A Node data : ";
		cin>>data;
		node = new Node;
		if (node==NULL)
		{
			cout<<"NO MEMORY...";
			return -1;
		}
		else
		{
			node->data = data;
			node->next = NULL;
			if (start==NULL)
			{	
				start=node;
			}
			else
			{
				node->next=start;
				start = node;
			}
		}
		count++;
		cout<<"More NODE ?\n";
		cin>>c;
	}
	display();
	Previous = start;
	struct Node *temp2;
	while(Previous!=NULL)
	{
		Next = Previous->next;
		while(Next!=NULL)
		{
			if (Previous->data > Next->data)
			{
				int t = Previous->data;
				Previous->data = Next->data;
				Next->data = t;
			}
			Next = Next->next;
		}
		Previous = Previous->next;
	}
	display();
}