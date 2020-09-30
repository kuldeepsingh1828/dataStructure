#include <stdio.h>
#include <stdlib.h>
#define size 50
int queue[size];
int rear  = -1;
int front = -1;
void insert(int item)
{
	if (rear == size - 1)
	{
		printf("OVERFLOW...\n");
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}
		rear = rear + 1;
		queue[rear] = item;
	}
}
int delete()
{
	if (front == -1 || front > rear)
	{
		printf("UNDERFLOW...\n");
		return NULL;
	}
	else
	{
		int item = queue[front]; //front  = 0
		front = front + 1;
		return item;
	}

}
void display()
{
	if (front == -1)
	{
		printf("EMPTY QUEUE\n");
	}
	else
	{
		for (int i = front; i <= rear; ++i)
		{
			printf("%d ", queue[i]);
		}
		printf("\n");
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
		printf("\n\t\t\tWELCOME TO QUEUE\n");
		printf("\n\t\t\t\t1. INSERT IN QUEUE\n");
		printf("\n\t\t\t\t2. DELETE FROM QUEUE\n");
		printf("\n\t\t\t\t3. DISPLAY QUEUE\n");
		printf("\n\t\t\t\t4. CLOSE IT\n");
		printf("\n\t\t\t\tEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : 
        			printf("\nEnter the ITEM : ");
        			scanf("%d",&item); 
        			insert(item);
        			break;
			case 2 : 
        			item = delete();
        			printf("\nDELETED ITEM : %d\n",item);
        			break;
			case 3 : 
        			printf("\nITEMs in QUEUE : \n"); 
        			display();
        			break;
			case 4 : 
        			printf("\nTHANK YOU! BYE\n");
        			return 0;
        			break;
		}
		printf("\nAre You interested for More operations(y/Y for yes) ?\n");
		fflush(stdin);
	scanf("%c",&c);
	}
}