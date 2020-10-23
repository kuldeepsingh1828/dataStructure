#include "iostream"
#define max 10
using namespace std;
struct Node {
	double	data;		
	Node*  left;
	Node*  right;		
};

class BSTree {
public:
	BSTree() ;	
	Node* newNode(double);
	void insert( double x);	
	void postorder( Node* r);	
	void postorderList( void);	
	void inorder( Node* r);	
	void inorderList(void);	
	void preorder( Node* r);	
	void preorderList(void);
private:
	Node* root;
};

Node* BSTree::newNode(double item){
    Node *temp = new Node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void BSTree::insert (double n)
{
	Node *h=root;
	Node *parent;
	if ( h == NULL)
    {
        root = newNode(n);
        return;
    }
	parent=root;
	while(h)
	{
		parent=h;
	  	if (n < h->data)
	      	h = h->left ;
	  else h= h->right;
    }
    if (parent->data<n)
       parent->right  = newNode(n);
    else  parent->left  = newNode(n);
}

void BSTree::inorder(Node *root){
    if (root != NULL) {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void BSTree::inorderList(){
   cout<<"\nInOrder:"; inorder(root);
}

void BSTree::preorder(Node *root){
    if (root != NULL) {
    	cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void BSTree::preorderList(){
   cout<<"\nPreOrder:"; preorder(root);
}

void BSTree::postorder(Node *root){
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

void BSTree::postorderList(){
   cout<<"\nPostOrder:";
    postorder(root);
}

BSTree::BSTree()
{
    root=NULL;
    
}


int main() {
BSTree tree;
    tree.insert(12); // nothing
    tree.insert(2); // LEFT or Right
    tree.insert(21);
    tree.insert(11);
    tree.insert(13);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);
    tree.insert(31);
    tree.postorderList();
	tree.preorderList();
	tree.inorderList();
12 2 21 11 13 1 3 5 31
}
