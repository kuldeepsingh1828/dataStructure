#include <iostream>
using namespace std;
int main()
{
	int i, j ;
	int A[] = {2, 5, 1 ,6, 4, 3, 8, 7};
	cout<<"\nBEFORE SORTING : \n";
	for (i = 0; i < 8; ++i)
	{
	cout<<A[i]<<" ";
	}
	cout<<endl;
	for (i = 1; i < 8; ++i)
	{
		j = i;
		while(j > 0 && (A[j-1] > A[j]))
		{
			int temp = A[j];
			A[j] = A[j-1];
			A[j-1] = temp;
			j--;
		}
		for (j = 0; j < 8; ++j)
	{
	cout<<A[j]<<" ";
	}
	cout<<endl;

	}
	cout<<"\nAFTER SORTING : \n";
	for (i = 0; i < 8; ++i)
	{
	cout<<A[i]<<" ";
	}
	cout<<endl;

}