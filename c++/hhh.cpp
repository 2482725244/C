#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
 int Div(int x,int y)
{
	return x/y;
 } 
main()
{
	int(*arr[5])(int,int)={Add,Div};
	int a=9,b=3;
	int i=arr[0](a,b);
	printf("%d\n",i);
	int q=arr[1](a,b);
	printf("%d\n",q);
}
