//2135161066 李雨宸 
#include<stdio.h>
main()
{
	int x,y;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	if(x>5)
		y=x+3;
	else if(x>=0&&x<=5)
		y=0;
	else
		y=2*x+30;
	printf("%d",y);
}
