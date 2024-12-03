/* 
#include<stdio.h>
main()
{
	int a=0,b=0,c=0;
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("最大值是：%d",a);
	else if(b>c&&b>a)
		printf("最大值是：%d",b);
	else 
		printf("最大值是：%d",c);
 }*/
 
 
 
 
 
 
 
 
//2135161076 张羽翔 
#include<stdio.h>
main()
{
	int a=0,b=0,max;
	printf("请输入2个整数：\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		max=a;
	else
		max=b;
	printf("最大值是：%d",max);
}

 
