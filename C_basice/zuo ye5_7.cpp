//2135161039 �ϵ��� 
#include<stdio.h>
main()
{
	int m,n;
	int i,j;
	int c=0;
	int p=0;
	printf("��涨m,n������m>=1,n<=300\n");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{ 
			if(i%j==0)
				c++;
			if(c>=3)
			break;
		}
		 if(c<3)
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
