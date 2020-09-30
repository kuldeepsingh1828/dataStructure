#include <stdio.h>
int main()
{
	int A[] = {1,2,3,4,5};
	int *p =A; //as we all know that we use address in pointer
	p++; // p = p + sizeof(int)
	printf("%p\n",p );
	printf("%p\n",A );
}

/*
when p = &A[0]
0x7ffee46f1b40
0x7ffee46f1b40


when p = A
p++
0x7ffeeb94fb40
0x7ffeeb94fb40

when p = &A
ERROR
*/