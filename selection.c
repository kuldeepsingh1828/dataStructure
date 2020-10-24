//SELECTION SORT (ASC to DESC)
#include <stdio.h>
int main()
{
	int size,count=0;
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
		int smallest = A[i];
		int pos = i;
		for (int j = i+1; j < size; ++j)
		{
			if (smallest > A[j])
			{
				smallest = A[j];
				pos = j;
			}
		}
		if (pos!=i)
		{
			int temp = A[i];
			A[i] =  A[pos];
			A[pos] = temp;
			count++;
		}
		printf("\nAFTER ITERATION %d:  \n",i+1);
		for (int j = 0; j < size; ++j)
		{
			printf("%d ",A[j] );	
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