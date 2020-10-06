#include <stdio.h>
int main()
{
	struct Jay
	{
		int data;
	};
	struct  Jay Obj;
	struct  Jay *p = &Obj;
	Obj.data = 30;
	printf("%d\n",p->data);
}
