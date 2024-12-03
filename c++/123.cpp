//01-韩云祥 
#include<stdio.h>
main()
{
	printf("请输入长，高，宽");
	float a,b,c,v;
	scanf("%f",&a) ;
	scanf("%f",&b) ;
	scanf("%f",&c) ;
	v=a*b*c;
	printf("长方体的体积是:%0.2f",v) ;
}
