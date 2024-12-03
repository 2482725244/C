#include<stdio.h>
extern int add(int x,int y);
main()
{
	int a=10,b=20,c=0;
	c=add(a,b);
	printf("%d",c);
 } 
