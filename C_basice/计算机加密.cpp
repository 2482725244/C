#include<stdio.h> 
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int jia(int x,int y)
{
	return x+y;
}
int jian(int x,int y)
{
	return x-y;
}
int cheng(int x,int y)
{
	return x*y;
}
int chu(int x,int y)
{
	return x/y;
}
main()
{
	int(*arr[5])(int,int)={0,jia,jian,cheng,chu};
	char ch[20];
	int p=3; 
	for(int i=0;i<3;i++)
	{
		int j=1;
		printf("请输入密码\n");
		scanf("%s",&ch);
		if((strcmp(ch,"qwe123456")==0))
		{
			printf("\n"); 
			printf("身份确认成功！欢迎使用\n"); 
			do
			{
				int x=0,y=0;
				printf("\n");
				printf("请选择运算的类型或是退出>\n");
				printf("*********************************\n"); 
				printf("********1.加法      2.减法*******\n"); 
				printf("********3.乘法      4.除法*******\n"); 
				printf("************  0.退出 ************\n");
				scanf("%d",&j);
				if(j>=1&&j<=4)
				{
					printf("选择成功\n"); 
					printf("请输入两个整数\n");
					scanf("%d%d",&x,&y);
					printf("%d\n",arr[j](x,y));	
				}
				else if(j==0)
				{
					printf("已退出\n"); 
					break;
				}
				else 
				printf("输入错误，请重新输入\n");
				Sleep(1000);
				system("cls");
			}while(1);
			
	 	} 
	 	else
	 	{
	 		p--;
	 		if(p!=0)
			printf("密码错误！请重新输入。\n");
	 		if(p!=0)
	 		{
	 			printf("(注：您现在还有%d次机会)\n",p);
	 			printf("\n");
			 }
	 		if(p==0)
	 		{
	 			printf("输入错误次数过多，已自动退出！\n"); 
				break;
			}
		}
		if(j==0)
		break; 	 
	}
	printf("欢迎下次使用\n");
	Sleep(1000);	  
} 
