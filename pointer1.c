#include <stdio.h>
int main()
{
	int a;
	a = 10;
	int *p; //WILD POINTER
	if (p==NULL)
	{
		printf("P is NULL Pointer\n");
	}
	p = NULL; //NULL POINTER
	p =&a; //address of A
	printf("%d\n",*p);
}