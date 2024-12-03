#include<stdio.h>
#include"fu zhu han shu.c"
#define hang 3
#define lie 3
main()
{
	int p;
	char arr[hang][lie]={0};
	chushihua(arr,hang,lie);
	while(1)
 	{
		print();
		scanf("%d",&p);
		if(p==1)
		{
		qipan();
		}
		else if(p==2)
		break;
		else
		printf("输入格式错误，请重新输入"); 
	}
	printf("欢迎下次使用"); 
} 
