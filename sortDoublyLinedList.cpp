//INSERTION IN THE BEGINNING 
#include <iostream>
using namespace  std;
struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*start,*node,*Previous,*Next;
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
	int count = 0;
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