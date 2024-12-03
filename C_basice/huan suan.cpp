#include<stdio.h> 
main()
{
	printf("请输入需要换算的数字w：");
	short w;
	scanf("%d",&w) ;
	printf("十六进制是：w=%#x\n",w);
	printf("八进制是：w=%#o",w);
}
