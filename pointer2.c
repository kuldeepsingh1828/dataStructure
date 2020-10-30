#include <stdio.h>
int main()
{
	int *p = NULL; //NULL pointer

	if (1)
	{
		int a = 10;
		p = &a;
		printf("%p\n",*p); // pointer
	}
	printf("%p\n",*p); //dangling pointer
}