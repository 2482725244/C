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
		printf("����������\n");
		scanf("%s",&ch);
		if((strcmp(ch,"qwe123456")==0))
		{
			printf("\n"); 
			printf("���ȷ�ϳɹ�����ӭʹ��\n"); 
			do
			{
				int x=0,y=0;
				printf("\n");
				printf("��ѡ����������ͻ����˳�>\n");
				printf("*********************************\n"); 
				printf("********1.�ӷ�      2.����*******\n"); 
				printf("********3.�˷�      4.����*******\n"); 
				printf("************  0.�˳� ************\n");
				scanf("%d",&j);
				if(j>=1&&j<=4)
				{
					printf("ѡ��ɹ�\n"); 
					printf("��������������\n");
					scanf("%d%d",&x,&y);
					printf("%d\n",arr[j](x,y));	
				}
				else if(j==0)
				{
					printf("���˳�\n"); 
					break;
				}
				else 
				printf("�����������������\n");
				Sleep(1000);
				system("cls");
			}while(1);
			
	 	} 
	 	else
	 	{
	 		p--;
	 		if(p!=0)
			printf("����������������롣\n");
	 		if(p!=0)
	 		{
	 			printf("(ע�������ڻ���%d�λ���)\n",p);
	 			printf("\n");
			 }
	 		if(p==0)
	 		{
	 			printf("�������������࣬���Զ��˳���\n"); 
				break;
			}
		}
		if(j==0)
		break; 	 
	}
	printf("��ӭ�´�ʹ��\n");
	Sleep(1000);	  
} 
