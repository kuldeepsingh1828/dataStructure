//NOTE : ALWAYS work on SORTED ARRAY

#include <stdio.h>
int main()
{
	int item,flag = 0;
	int A[10] = {156,212,378,422,589,654,715,891,962,1039};
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ",A[i] );
	}
	printf("\nEnter the item to be searched  ?\n");
	scanf("%d",&item);
	int beg,last,mid;
	beg = 0;
	last = 9;
	while(beg<=last)
	{	
		mid = (beg+last)/2;
		if (A[mid]==item)
		{
			flag = 1;
			break;
		}else if (A[mid] > item)
		{
			last = mid - 1; 
		}
		else
		{
			beg = mid + 1;
		}
	}
	flag ? printf("FOUND\n"):printf("NOT FOUND\n");
}