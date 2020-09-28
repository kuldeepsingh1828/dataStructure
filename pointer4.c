#include <stdio.h>
int main()
{
	int A[] = {2,56,3,45,12,5,8,23,56};
	int *p = &A[0];
	for (int i = 0; i < 9; ++i)
	{
		printf("%d ",A[i] );
	}
	p++; // increment the address 
	printf("%d\n",*p);     // 56
	printf("%d\n",*p++);   // 56
	printf("%d\n",*(p++)); // 3
	for (int i = 0; i < 9; ++i)
	{
		printf("%d ",A[i] );
	}
	printf("\n");
}
/*
chT : 56 56 3
ABN : 2 3 45
ARP : 2 2 3
CHR : 56 57 3
HAR : 2 3 2
JAN : 2 3 4
JAY : A[0] 56 3
MAY : 2 56 3 
NIK : r r 56
NIR : 2 2 56
NIT : 2 56 56 
PRG : 56 56 2
SHT :  address 56 3
ANU : 56  56  3
YAS : r r 56
*/