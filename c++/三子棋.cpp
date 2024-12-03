#include<stdio.h> 
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define row1 3
#define col1 3
void chu(char ch[row1][col1],int row,int col)
	{
		for(int i=0;i<col;i++)
			for(int j=0;j<row;j++)
			{
				ch[i][j]=' ';
			}
	}
	void startx()
	{
		printf("*******************\n");
		printf("***1.开始 0.退出***\n");
		printf("*******************\n");
	}
	void qipan(char ch[row1][col1],int row,int col)
	{
		for(int i=0;i<row;i++)
		{
			for(int k=0;k<row;k++)
			{
				printf(" %c |",ch[i][k]);
			}
			printf("\n");
			for(int y=0;y<row;y++)
			{
				printf("___|");
			}
			printf("\n");
		}
	}
	void xuanshou(char ch[row1][col1],int row,int col)
	{
		int x,y;
		printf("选手下棋\n");
		while(1)
		{
			printf("请输入坐标\n");
			scanf("%d%d",&x,&y);
			if(x>=1&&x<=row&&y>=1&&y<=col)
			{
				if(ch[x-1][y-1]==' ')
				{
					ch[x-1][y-1]='*';
					break;
				}
				else
				printf("该位置已被占用,请重新输入\n"); 
			}
			else
			printf("输入错误，请重新输入\n"); 
		}
		
	}
	char panduan(char ch[row1][col1],int row,int col)
	{
		if(ch[0][0]==ch[0][1]&&ch[0][0]==ch[0][2]&&ch[0][0]=='*'||
		ch[0][0]==ch[1][0]&&ch[0][0]==ch[2][0]&&ch[0][0]=='*'||
		ch[0][0]==ch[1][1]&&ch[0][0]==ch[2][2]&&ch[0][0]=='*'||
		ch[0][2]==ch[1][2]&&ch[0][2]==ch[2][2]&&ch[0][2]=='*'||
		ch[0][2]==ch[1][1]&&ch[0][2]==ch[2][0]&&ch[0][2]=='*'||
		ch[2][2]==ch[2][1]&&ch[2][2]==ch[2][0]&&ch[2][2]=='*'||
		ch[1][2]==ch[1][1]&&ch[1][2]==ch[1][0]&&ch[1][2]=='*'||
		ch[0][1]==ch[1][1]&&ch[0][1]==ch[2][1]&&ch[0][1]=='*')
		return '*';
		else if(ch[0][0]==ch[0][1]&&ch[0][0]==ch[0][2]&&ch[0][0]=='#'||
		ch[0][0]==ch[1][0]&&ch[0][0]==ch[2][0]&&ch[0][0]=='#'||
		ch[0][0]==ch[1][1]&&ch[0][0]==ch[2][2]&&ch[0][0]=='#'||
		ch[0][2]==ch[1][2]&&ch[0][2]==ch[2][2]&&ch[0][2]=='#'||
		ch[0][2]==ch[1][1]&&ch[0][2]==ch[2][0]&&ch[0][2]=='#'||
		ch[2][2]==ch[2][1]&&ch[2][2]==ch[2][0]&&ch[2][2]=='#'||
		ch[1][2]==ch[1][1]&&ch[1][2]==ch[1][0]&&ch[1][2]=='#'||
		ch[0][1]==ch[1][1]&&ch[0][1]==ch[2][1]&&ch[0][1]=='#')
		return '#';
		else if(ch[0][0]==' '||ch[0][1]==' '||ch[0][2]==' '||
		ch[1][0]==' '||ch[2][0]==' '||ch[1][1]==' '||
		ch[1][2]==' '||ch[2][1]==' '||ch[2][2]==' ')
		return 'c';
		else
		return 'q'; 
	}
	void jiqi(char ch[row1][col1],int row,int col)
	{
		printf("电脑下>>>\n");
		int x,y;
		while(1)
		{
			x=rand()%row;
			y=rand()%col;
			if(ch[x][y]==' ')
			{
				ch[x][y]='#';
				break;
			}
		}
	}
	void game()
	{
		char ch[row1][col1]={0}; 
		char p;
		chu(ch,row1,col1);
		qipan(ch,row1,col1);
		while(1)
		{
			xuanshou(ch,row1,col1);
			qipan(ch,row1,col1);
			p=panduan(ch,row1,col1);
			if(p=='*')
			{
				printf("你胜利\n");
				break;
			}
			else if(p=='q')
			{
				printf("平局\n");
				break;
			}
			jiqi(ch,row1,col1);
			qipan(ch,row1,col1);
			p=panduan(ch,row1,col1);
			if(p=='#')
			{
				printf("电脑获胜\n"); 
				break;
			}
			else if(p=='q')
			{
				printf("平局\n");
				break;
			}
		}
	}
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
//		int  zhuhanshu()
//		{
			int a=1;
			srand((unsigned int)time(NULL));
			while(a)
			{
				startx();
				scanf("%d",&a);
				switch(a)
				{
					case 1:
						game();
						break;
					case 0:
						break;
					default:
						printf("输入错误，重新输入"); 
						break;
				}
			}
//		 } 
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
