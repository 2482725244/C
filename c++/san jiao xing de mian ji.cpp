//求三角形的面积 
#include<stdio.h>
#include<math.h> 
main()
{
	printf("请输入三角形的三个边长\n"); 
	double a,b,c,s,area;
	scanf("%lf%lf%lf",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积是：%f\n",area);
}
