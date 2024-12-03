//圆锥的体积 
#include<stdio.h>
main()
{
	double s,h,v,r;
	printf("请输入圆锥底面圆的半径和圆锥的高："); 
	scanf("%lf%lf",&r,&h);
	s=3.1415926*r*r;
	v=(s*h)/3;
	printf("圆锥的体积是：%f",v);
}
