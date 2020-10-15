//natural numbers upto 100 using recurusion
#include <iostream>
using namespace  std;
void natural(int i);
int main()
{
	natural(1);
}
void natural(int i)
{
	if (i<=100)
	{
		cout<<i<<" ";
		natural(i+1);
	}
}