#include <iostream>
#include <stdlib.h>
using namespace  std;
const int size = 40;
class Stack
{
  public : 
  int s[size];
  int TOP;
  Stack()
  {
  	TOP = -1; // -1 means empty
  }
  void push(int item)
  {
  	//check for FULL STACK
  	if (TOP == size-1)
  	{
  		cout<<"\nOVERFLOW...\n";
  		return ;
  	}
  	else
  	{
  		TOP++; 
  		s[TOP] = item;
  	}
  }
  int pop()
  {
  	//if EMPTY STACK
  	if (TOP == -1)
  	{
  		cout<<"\nUNDERFLOW...\n";
  		return NULL;
  	}
  	else
  	{
  		int item = s[TOP];
  		TOP--;
  		return item;
  	}
  }
  void display()
  {
  	 int t = TOP;
  	 while(t > -1)
  	 {
  	 	cout<<"\n"<<s[t--];
  	 }
  }
};

int main()
{
	system("clear");
	int choice,item;
	char c ='y';
	Stack stack;
	while(c=='y' || c=='Y')
	{
		system("clear");
		cout<<"\n\t\t\tWELCOME TO STACK\n";
		cout<<"\n\t\t\t\t1. PUSH IN STACK\n";
		cout<<"\n\t\t\t\t2. POP FROM STACK\n";
		cout<<"\n\t\t\t\t3. DISPLAY STACK\n";
		cout<<"\n\t\t\t\t4. CLOSE IT\n";
		cout<<"\n\t\t\t\tEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1 : 
        			cout<<"\nEnter the ITEM : ";
        			cin>>item; 
        			stack.push(item);
        			break;
			case 2 : 
        			item = stack.pop();
        			cout<<"\nPOPPED ITEM : "<<item<<endl;
        			break;
			case 3 : 
        			cout<<"\nITEMs in STACK : "; 
        			stack.display();
        			break;
			case 4 : 
        			cout<<"\nTHANK YOU! BYE\n";
        			break;
		}
		cout<<"\nAre You interested for More operations(y/Y for yes) ?\n";
		fflush(stdin);
		cin>>c;
	}
}