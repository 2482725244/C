 
#include<stdio.h>
main()
{
	int i,j,m,n,p=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			printf("%d\t",i);
			p++;
		}
		if(p==8)
		{
			printf("\n");
			p=0;
		}
	}
 } 
