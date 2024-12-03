#include<stdio.h>
main()
{
	int a=0,b=0,c=0,max;
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		max=a;
	else if(b>c&&b>a)
		max=b;
	else 
		max=c;
	printf("最大值是：%d",max);
}
