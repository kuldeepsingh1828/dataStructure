//creating tree
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left,*right;
};
void inorder(struct Node *node);
void postorder(struct Node *node);
void preorder(struct Node *node);
struct Node *root,*node;
void insert(int item)
{
	node = new Node;
    node->data = item;
    node->left = node->right = NULL;
    if(root == NULL)
    {
    	root = node;
    }
    else
    {
        struct Node *parent = root;
        struct Node *child = root;
        while(child != NULL)
        {
            parent = child;
            if (item < child->data)
            {
                child = child->left;
            }
            else
            {
                child = child->right;
            }
        }
        if (parent->data < item)
        {
            parent->right = node;
        }
        else
        {
            parent->left = node;
        } 
    }
    
    postorder(root);
}
void inorder(struct Node *root)
{
	while(root != NULL)
	{
		inorder(root->left);
        cout<<" "<<root->data<<" ";
        inorder(root->right);
	}
}
void preorder(struct Node *root)
{
	while(root != NULL)
	{
	     cout<<" "<<root->data<<" ";
	     preorder(root->left);
	     preorder(root->right);
	}
}
void postorder(struct Node *root)
{
	while(root != NULL)
	{
          postorder(root->left);
          postorder(root->right);
          cout<<" "<<root->data<<" ";
	}
}
void display()
{
	int choice;
	cout<<"1.Inorder Display:\n2.Preorder Display\n3.Postorder Display\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"Inorder:";
		inorder(root);
		break;
		case 2:
		cout<<"Preorder:";
		preorder(root);
		break;
		case 3:
		cout<<"Postorder:";
		postorder(root);
		break;
		default:
		cout<<"No such option available\n";
	}
}

int main()
{
	root = NULL;
    int item,choice;
    char c = 'y';
    while(c == 'y' || c == 'Y')
    {   
        system("cls");
    	cout<<"\n************************MENU************************\n";
    	cout<<"\n\t\t\t1.INSERT IN TREE\t\t\t\n";
    	cout<<"\n\t\t\t2.DISPLAY THE TREE\t\t\t\n";
    	cout<<"\n\t\t\tENTER YOUR CHOICE:\t\t\t\n";
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    		cout<<"Enter item to insert:";
    		cin>>item;
    		insert(item);
    		break;
    		case 2:
    		display();
    		break;
    	}
    	cout<<"Do you want to execute more operations??:";
    	cin>>c;
    }
}