#include <iostream>
using namespace  std;
int main()
{
	const int a[10]={1,2,3};
	a[2] = 56;
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[i]<<"\t";
	}
}