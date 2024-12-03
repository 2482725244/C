//1-100相加的和 
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

//输入五级制成绩的转换 
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
			printf("成绩属于90-100");
		break;
		case'b':
			printf("成绩属于80-90");
		break;
		case'c':
			printf("成绩属于70-80");
		break;
		case'd':
			printf("成绩属于60-70");
		break;
		case'e':
			printf("成绩属于0-59");
		break;
		default:
			printf("输入错误");
		break; 
	 } 
 } 
 
//冒泡排序
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
   
//计算1！+2！+3！+.....+10！
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
 
//实现1-2+3-4+...+99-100
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













