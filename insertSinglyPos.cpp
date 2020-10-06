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
	int data,pos,count = 0 ;
	char c = 'y';
	while(c=='y' || c=='Y')
	{
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
				count = 1;
				start=node;
			} 
			else if (start->next==NULL) //1 NODE
			{
				count = 2;
				start->next=node;
			}
			else //MORE THAN 1 NODES
			{
				count++;
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
	cout<<"\nEnter new node data : ";
	cin>>data;
	cout<<"\nEnter Position : ";
	cin>>pos;
	if (!(pos<=count))
	{
		cout<<"\nPosition specified is not possible...\n";
		return -1;
	}
	else
	{
		node = new Node;
		if (node==NULL)
		{
			cout<<"\nMemory not allocated..\n";
		}
		node->data = data;
		node->next = NULL;
		if (pos==1)
		{
			node->next = start;
			start = node;
		}
		else
		{
			struct Node *t;
			cout<<"\nthis is else ";
			t = start;
			int i = 1;
			while(i<pos)
			{
				t = t->next;
			}
			cout<<"\nWHILE LOOP END\n";
			node->next = t->next; 
			t->next = node;
		}
	}
	cout<<"\nAfter insertion of new Node : \n";
	display();
}