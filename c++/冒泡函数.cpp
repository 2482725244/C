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
	//int s[12]={1,2,3,4,5,6,7,8,9,10,12,11};
	for(int i=0;i<12;i++)
	scanf("%d",&s[i]);
	bb(s,12);
	print(s);
	return 0;
 } 
