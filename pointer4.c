#include <stdio.h>
int main()
{
	int A[] = {2,56,3,45,12,5,8,23,56};
	int *p = &A[0];
	for (int i = 0; i < 9; ++i)
	{
		printf("%d ",A[i] );
	}
	p++; // increment the address 
	printf("\n%d\n",*p);     // 56
	printf("%d\n",*p++);   // 56
	printf("%d\n",*(p++)); // 3
	for (int i = 0; i < 9; ++i)
	{
		printf("%d ",A[i] );
	}
	printf("\n");
}