#include <stdio.h>
#include <stdlib.h>
#define size  50
int Stack[size];
int top = -1;
void push(int item)
{
	if (top == size-1)
	{
		printf("OVERLFLOW...\n");
	}
	else
	{
		top++;
		Stack[top] = item;
	}
}
int pop()
{
	if (top == -1)
	{
		printf("UNDERFLOW...\n");
		return 0;
	}
	else
	{
		int item = Stack[top];
		top--;
		return item;
	}
}
void display()
{
	if (top!=-1)
	{
		printf("%d<---\n",Stack[top]);
		int i = top - 1;
		while(i != -1)
		{

			printf("%d\n",Stack[i--]);
		}
	}
}
int main()
{
	system("clear");
	int choice,item;
	char c ='y';
	while(c=='y' || c=='Y')
	{
		system("clear");
		printf("\n\t\t\tWELCOME TO STACK\n");
		printf("\n\t\t\t\t1. PUSH IN STACK\n");
		printf("\n\t\t\t\t2. POP FROM STACK\n");
		printf("\n\t\t\t\t3. DISPLAY STACK\n");
		printf("\n\t\t\t\t4. CLOSE IT\n");
		printf("\n\t\t\t\tEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : 
        			printf("\nEnter the ITEM : ");
        			scanf("%d",&item); 
        			push(item);
        			break;
			case 2 : 
        			item = pop();
        			printf("\nPOPPED ITEM : %d\n",item);
        			break;
			case 3 : 
        			printf("\nITEMs in STACK : \n"); 
        			display();
        			break;
			case 4 : 
        			printf("\nTHANK YOU! BYE\n");
        			break;
		}
		printf("\nAre You interested for More operations(y/Y for yes) ?\n");
		fflush(stdin);
	scanf("%c",&c);
	}
}