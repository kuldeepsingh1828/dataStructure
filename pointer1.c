#include <stdio.h>
int main()
{
	int a;
	a = 10;
	int *p; //WILD POINTER
	p = NULL; //NULL POINTER
	p =&a; //address of A
	printf("%d\n",*p);
}