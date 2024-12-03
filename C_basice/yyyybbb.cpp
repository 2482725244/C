#include"stdio.h"
main()
{
	int sum1,sum2;
	int a,b,c,d,e,f;
	printf("请输入两个整数：");
	scanf("%d%d",&sum1,&sum2);
	a=sum1+sum2;
	printf("两数相加的和为：%d\n",a);
	b=sum1-sum2;
	c=sum2-sum1;
	printf("sum1-sum2的差为：%+d\n",b);
	printf("sum2-sum1的差为：%+d\n",c);
	d=sum1*sum2;
	printf("两数相乘的积为：%d\n",d);
	e=sum1/sum2;
	printf("两数相除的商为：%d\n",e);
	f=sum1%sum2;
	printf("两数相减的余为：%d\n",f); 
}
