#include"stdio.h"
main()
{
	int sum1,sum2;
	int a,b,c,d,e,f;
	printf("����������������");
	scanf("%d%d",&sum1,&sum2);
	a=sum1+sum2;
	printf("������ӵĺ�Ϊ��%d\n",a);
	b=sum1-sum2;
	c=sum2-sum1;
	printf("sum1-sum2�Ĳ�Ϊ��%+d\n",b);
	printf("sum2-sum1�Ĳ�Ϊ��%+d\n",c);
	d=sum1*sum2;
	printf("������˵Ļ�Ϊ��%d\n",d);
	e=sum1/sum2;
	printf("�����������Ϊ��%d\n",e);
	f=sum1%sum2;
	printf("�����������Ϊ��%d\n",f); 
}
