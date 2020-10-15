//sum all natural numbers upto 10 using recurusion
#include <iostream>
using namespace  std;
int natural(int i);
int main()
{
	int sum = natural(1);
	cout<<"\nThe sum is : "<<sum<<endl;
}
int natural(int i)
{
	if (i<=10)
	{
		return i + natural(i+1);
	}
	return 0;
}