#include <stdio.h>
int main()
{
	int A[][3] = 
	{
		1,2,3,
		4,5,6,
		7,8,9
	};
	int *p; //WILD POINTER
	p = &A[0]; //pointing to 2D Array 
	printf("%p\n",&A);
	printf("%d\n",*(p+1));
}

/*
	4 - 7
	2 - 5
	86 - Kuldeep
*/


