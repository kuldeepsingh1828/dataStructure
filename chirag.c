#include <stdio.h>
int main()
{
	short size;
	int A[size];
	printf("The size is : %d\n",size );
	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&A[i]);
	}
}