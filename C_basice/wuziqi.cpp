#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define row1 3
#define col1 3
//������
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
	printf("***1.��ʼ 0.�˳�***\n");
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
	printf("ѡ������\n");
	while(1)
	{
		printf("����������\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(ch[x-1][y-1]==' ')
			{
				ch[x-1][y-1]='*';
				break;
			}
			else
			printf("��λ���ѱ�ռ��,����������\n"); 
		}
		else
		printf("�����������������\n"); 
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
	printf("������>>>\n");
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
			printf("��ʤ��\n");
			break;
		}
		else if(p=='q')
		{
			printf("ƽ��\n");
			break;
		}
		jiqi(ch,row1,col1);
		qipan(ch,row1,col1);
		p=panduan(ch,row1,col1);
		if(p=='#')
		{
			printf("���Ի�ʤ\n"); 
			break;
		}
		else if(p=='q')
		{
			printf("ƽ��\n");
			break;
		}
	}
}
int main()
{
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
				printf("���������������"); 
				break;
		}
	}
 } 
