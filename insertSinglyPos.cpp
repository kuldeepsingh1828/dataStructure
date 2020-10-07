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
	cout<<"\nCount is  : "<<count<<endl;
	cout<<"\nEnter new node data : ";
	cin>>data;
	cout<<"\nEnter Position : ";
	cin>>pos;
	if (pos>0 && pos<=count)
	{
		node  = new Node;
		node->data = data;
		node->next=NULL;
		if (pos==1)
		{
			node->next = start;
			start = node;
		}
		else
		{
			struct Node *temp;
			temp = start;
			int i  = 1;
			while(i!=(pos-1))
			{
				temp = temp->next;
				i++;
			}
			node->next = temp->next;
			temp->next = node;
		}
	}
	else if (pos==(count+1))
	{
		cout<<"\nYou can do...\n";
		//insert into end
	}
	else
	{
		cout<<"\nNOT POSSIBLE...\n";
	}
	cout<<"\nAfter insertion of new Node : \n";
	display();
}