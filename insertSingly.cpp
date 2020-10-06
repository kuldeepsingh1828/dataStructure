//insert in front
#include <iostream>
#include <stdlib.h>
using namespace  std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *start;
struct Node *node;
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
		cout<<"More NODE ?\n";
		cin>>c;
	}
	display();
}