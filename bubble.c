//BUBBLE SORT (ASC to DESC)
//12 56 42 78 41 89 32 93 45 72
#include <stdio.h>
int main()
{
	int size,count = 0;
	printf("Enter the size of the array  : ");
	scanf("%d",&size);
	int A[size];
	printf("Enter %d elements\n",size );
	for (int i = 0; i < size; ++i)
	{
		scanf("%d",&A[i]);
	}
	printf("BEFORE SORTING....\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ",A[i] );
	}
	printf("\nAFTER SORTING....\n");
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = 0; j < size-1-i; ++j)
		{
			if (A[j] > A[j+1])
			{
				int temp = A[j];
				A[j]     = A[j+1];
				A[j+1]   = temp;
				count++;
			}	
		}
	}
	printf("\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ",A[i] );	
	}
	printf("\nThe swapping done is : %d\n",count );
	printf("\n");
}