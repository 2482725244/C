#include<stdio.h>
int qm(int a,int n)
{
	int sum=1;
	for(int i=0;i<n;i++)
	{
		sum*=a;
	}
	return sum;
}
//int ws(int i)
//{
//	int c=0;
//	while(i>0)
//	{
//		i=i/10;
//		c++;
//	}
//	return c;
//}
int qh(int i,int y)
{
	int sum=0;
	for(int j=0;j<y;j++)
	{
		int q=i%10;
		sum+=qm(q,y);
		i=i/10;
	}
	return sum;
}
int main()
{
	int a=123,n=5;
	int y=qh(a,3);
	printf("%d\n",y);
	return 0;
}
