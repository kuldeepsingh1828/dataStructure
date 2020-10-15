//sum all natural numbers upto n using recurusion
#include <iostream>
using namespace  std;
int natural(int i,int n);
int main()
{
	int n;
	cout<<"\nEnter the value of  N : ";
	cin>>n;
	int sum = natural(1,n);
	cout<<"\nThe sum is : "<<sum<<endl;
}
int natural(int i,int n)
{
	if (i<=n)
	{
		return i + natural(i+1,n);
	}
	return 0;
}