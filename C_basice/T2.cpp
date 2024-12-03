#include<stdio.h>
main()
{
	int a=10;
	int*p=&a;
	*p=60;
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%d",a);
 } 
