#include<stdio.h>
int fn()
{
	static int a=1;
	a++;
	printf("%d\n",a);
}
main()
{
	int i=0;
	while(i<5)
	{
		fn();
		i++;
	}
 } 
