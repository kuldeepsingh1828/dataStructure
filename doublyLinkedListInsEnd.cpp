//INSERTION IN THE END 
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
				struct Node *temp;
				temp = start;
				while(temp->next!=NULL)
				{
					temp = temp->next;
				}
				temp->next = node;
				node->prev = temp;
			}
		}
		cout<<"\nMore  ? ";
		cin>>c;
	}
	display();
}