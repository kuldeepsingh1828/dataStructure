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
			
			if (start==NULL) //NO NODE
			{	
				start=node;
			} 
			else if (start->next==NULL) //1 NODE
			{
				start->next=node;
			}
			else //MORE THAN 1 NODES
			{
				struct Node *temp;
				temp = start;
				while(temp->next!=NULL)
				{
					temp = temp->next;
				}
				temp->next = node;
			}
		}
		cout<<"More NODE ?\n";
		cin>>c;
	}
	display();
}