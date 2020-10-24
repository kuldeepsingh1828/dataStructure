#include <iostream>
#include <stdlib.h>
using namespace  std;
struct Node
{
	struct Node *left;
	int data;
	struct Node *right;
}*root,*temp,*temp2,*node;
void insert(int data)
{
	node  = new Node;
	if (node==NULL)
	{
		cout<<"\nOVERFLOW...\n";
		exit(-2);
	}
	node->data = data;
	nod->left = node->right = NULL;
	if (root==NULL)
	{
		root = node;
	}
	else
	{
		temp = root;
		temp2 = root;
		while()
	}
}
void inorder(Node *root)
{
    if (root != NULL) {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
}
void display()
{
	inorder(root);
}
int main()
{
	root = NULL;
	int choice,data;
	char c = 'y';
	while(c=='y' || c=='Y')
	{
		system("clear");
		cout<<"\n***********************BINARY SEARCH TREE***********************";
		cout<<"\n\t\t1.INSERT";
		cout<<"\n\t\t2.DELETE";
		cout<<"\n\t\t3.EXIT";
		cout<<"\n\t\tenter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1 : 
					cout<<"\nEnter the data : ";
					cin>>data;
					insert(data);
					display();
					break;

			case 2 :
					break;
			case 3 :
					break;
			default : 
					break;
		}
		cout<<"\nMore choice : ";
		fflush(stdin);
		cin>>c;
	}
}