#include <stdio.h>
int main()
{
	int item,flag = 0;
	int A[] = {1,4,8,7,9,2,6,10,3,5};
	for (int i = 0; i < 10; ++i)
	 {
	 	printf("%d ",A[i] );
	 }
	 printf("\nEnter the value you want to search  : ");
	 scanf("%d",&item);
	 for (int i = 0; i < 10; ++i)
	 {
	 	if (A[i]==item)
	 	{
	 		flag = 1;
	 		break;
	 	}
	 }
	 flag ? printf("ITEM FOUND\n") : printf("ITEM NOT FOUND\n");
}