#include<stdio.h>
void h(int* x,int* y)
{
	int p;
	p=*x;
	*x=*y;
	*y=p;
}
main()
{
	int a=10,b=20;
	printf("%d %d\n",a,b);
	h(&a,&b);
	printf("%d %d\n",a,b);
}
