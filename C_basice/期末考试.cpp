//1-100��ӵĺ� 
#include<stdio.h>
main()
{
	int sum=0;
	for(int i=1;i<=100;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
 } 

//�����弶�Ƴɼ���ת�� 
#include<stdio.h>
main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	ch+=32;
	switch(ch)
	{
		case'a':
			printf("�ɼ�����90-100");
		break;
		case'b':
			printf("�ɼ�����80-90");
		break;
		case'c':
			printf("�ɼ�����70-80");
		break;
		case'd':
			printf("�ɼ�����60-70");
		break;
		case'e':
			printf("�ɼ�����0-59");
		break;
		default:
			printf("�������");
		break; 
	 } 
 } 
 
//ð������
#include<stdio.h>
void bb(int s[],int sz)
{
	for(int i=0;i<sz-1;i++)
	for(int j=0;j<sz-1-i;j++)
	{
		if(s[j]<s[j+1])
		{
			int t=s[j];
			s[j]=s[j+1];
			s[j+1]=t;
		}
	}
}
void print(int s[])
{
	for(int i=0;i<12;i++)
	printf("%d\t",s[i]);
}
main()
{
	int s[12];
	for(int i=0;i<12;i++)
	scanf("%d",&s[i]);
	bb(s,12);
	print(s);
	return 0;
 }
   
//����1��+2��+3��+.....+10��
#include<stdio.h>
int fun(int n)
{
	if(n>1)
	return n*fun(n-1);
	else
	return 1;
}
main()
{
	int sum=0;
	for(int i=1;i<=10;i++)
	{
		sum+=fun(i);
	}
	printf("%d",sum);
 } 
 
//ʵ��1-2+3-4+...+99-100
#include<stdio.h>
main()
{
	int sum=0;
	for(int i=1;i<=100;i++)
	{
		if(i%2==0)
		sum-=i;
		else
		sum+=i;
	}
	printf("%d",sum);
 } 













