#include <stdio.h>
int main()
{
	int A[] = {1,2,3,4,5};
	int *p =A; //as we all know that we use address in pointer
	p++; // p = p + sizeof(int)
	printf("%p\n",p );
	printf("%p\n",A );
}