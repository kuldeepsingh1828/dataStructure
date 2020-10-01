#include <stdio.h>
int main()
{
	int A[12][] = 
	{
		1,2,3,
		4,5,6,
		7,8,9
	};
	int *p; //WILD POINTER
	p = A; //pointing to 2D Array 
	printf("%p\n",&A);
	printf("%d\n",*(p+2));
}

/*

1 2 3 4 5 6 7 8 9 10

02 * 05
05 * 02
01 * 10
10 * 1
*/


