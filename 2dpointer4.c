#include <stdio.h>
int main()
{
	int A[12][3] = 
	{
		1,2,3,
		4,5,6,
		7,8,9
	};
	int *p; //WILD POINTER
	p = A; //pointing to 2D Array 
	printf("%p\n",&A);
	printf("%d\n",*(p+3));
}