#include<stdio.h>
int main()
{
	int a;
	char A[10];
	for (int i = 0; i < 3; ++i)
	{
		fflush(stdin);
		printf("Enter a : \n");
		scanf("%d",&a);
		printf("Enter a name : \n");
		scanf("%s",A);
	}
}