//2135161039 �ϵ��� 
#include<stdio.h>
main()
{
	int i;
	int a=0,b=0,c=0;
	char ch;
	printf("������ʮ���ַ�\n"); 
	for(i=0;i<10;i++)
	{
		ch=getchar();
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
		a++;
		else if(ch>='0'&&ch<='9')
		b++;
		else
		c++;
	}
	printf("Ӣ���ַ���%d���������ַ���%d���������ַ���%d��",a,b,c);
 } 
