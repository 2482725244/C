#include<stdio.h> 
#include<string.h>
#include<windows.h>
#include<stdlib.h>
main()
{
	char ch[20];
	int p=3; 
	for(int i=0;i<3;i++)
	{
		int j=1;
		printf("请输入密码\n");
		scanf("%s",&ch);
		if((strcmp(ch,"qwe123456")==0))
		{
			printf("身份确认成功！欢迎使用\n"); 
			
	 	} 
	 	else
	 	{
	 		p--;
	 		if(p!=0)
			printf("密码错误！请重新输入。\n");
	 		if(p!=0)
	 		printf("您现在还有%d次机会\n",p);
	 		if(p==0)
	 		{
	 			printf("输入错误次数过多，已自动退出！\n"); 
				break;
			}
		}
	}
	printf("欢迎下次使用\n");
	Sleep(1000);	  
}
