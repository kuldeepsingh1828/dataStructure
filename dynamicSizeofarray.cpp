#include <iostream>
using namespace  std;
int main()
{
	int size;
	cout<<"\nEnter the size : ";
	cin>>size;
	cout<<"\nThe size is : "<<size;
	int A[size];
	for (int i = 0; i < size; ++i)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
}