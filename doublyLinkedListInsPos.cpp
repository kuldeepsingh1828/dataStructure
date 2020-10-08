//INSERTION at position 
#include <iostream>
using namespace  std;
struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*start,*node;
void display()
{
	struct Node *temp;
	temp = start;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ---> ";
		temp = temp->next;
	}
	cout<<"\n";
}
int main()
{
	start = node = NULL;
	char c ='y';
	int position,count = 0;
	while(c=='y' || c=='Y')
	{
		node = new Node;
		if (node==NULL)
		{
			cout<<"\nOVERLFLOW...\n";
			return -1;
		}
		else
		{
			count++;
			cout<<"\nEnter data : ";
			cin>>node->data;
			node->prev = NULL;
			node->next = NULL;
			if (start==NULL)
			{
				cout<<"\nInserted first Node...\n";
				start = node;
			}
			else
			{
				node->next = start;
				start->prev = node;
				start = node;
				cout<<count<<" Node Inserted...\n";
			}
		}
		cout<<"\nMore  ? ";
		cin>>c;
	}
	display();
	c='y';
	while(c=='y' || c=='Y')
	{
		node  = new Node;
		if (node==NULL)
		{
			cout<<"\nOVERFLOW...\n";
		}
		else
		{	
			count++;
			cout<<"\nEnter data  : ";
			cin>>node->data;
			node->prev = node->next = NULL;
			cout<<"\nEnter position : ";
			cin>>position;
			if (position>count)
			{
				cout<<"\not Possible...\n";
			}
			else
			{
				struct Node *temp = start;
				int i = 1;
				while( i < position-1)
				{
					temp=temp->next; 
					i++;
				}
				node->next = temp->next;
				node->prev = temp;
				temp->next = node;
				temp->next->prev = node;

			}
		}
		cout<<"\nMore  ? ";
		cin>>c;
	}
	display();
}