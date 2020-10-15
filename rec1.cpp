//table of 5 using function recursion.
#include <iostream>
using namespace  std;
void table(int i);
int main()
{
	table(1);
	cout<<endl;
}
void table(int i)
{
		cout<<"\n5 * "<<i<<" = "<<(5*i);
		if (i<10)
		{
			table(i+1);
		}
}