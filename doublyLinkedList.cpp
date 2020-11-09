#include <iostream>
using namespace  std;
struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*start,*node1,*node2,*node3,*node4;
void display()
{
	struct Node *temp;
	temp = start;
	while(temp!=NULL)
	{
		cout<<temp->data<<" <---> ";
		temp = temp->next;
	}
	cout<<"NULL\n";
}
int main()
{
	start = node1 = node2 = node3 = node4 = NULL;
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	node4 = new Node;
	node1->prev = node1->next=NULL;
	node1->data = 10;
	node2->prev = node2->next=NULL;
	node2->data = 20;
	node3->prev = node3->next=NULL;
	node3->data = 30;
	node4->prev = node4->next=NULL;
	node4->data = 40;

	node1->next = node2;
	node2->prev = node1;
	node2->next = node3;
	node3->prev = node2;
	node3->next = node4;
	node4->prev = node3;
	start = node1;
	display();
}