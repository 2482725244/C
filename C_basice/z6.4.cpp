//2131561039 цо╣беТ 
#include<stdio.h>
main()
{
	int a[6]={5,6,4,2,3,1};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[j]<a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<6;i++)
	printf("%d\t",a[i]);
}
