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
		printf("����������\n");
		scanf("%s",&ch);
		if((strcmp(ch,"qwe123456")==0))
		{
			printf("���ȷ�ϳɹ�����ӭʹ��\n"); 
			
	 	} 
	 	else
	 	{
	 		p--;
	 		if(p!=0)
			printf("����������������롣\n");
	 		if(p!=0)
	 		printf("�����ڻ���%d�λ���\n",p);
	 		if(p==0)
	 		{
	 			printf("�������������࣬���Զ��˳���\n"); 
				break;
			}
		}
	}
	printf("��ӭ�´�ʹ��\n");
	Sleep(1000);	  
}
