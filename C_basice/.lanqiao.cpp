#include<stdio.h>
int main()
{
	int c=0;
	int a[25][25]={0};
	for(int i=0;i<25;i++)
	{
		for(int j=0;j<25;j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
	for(int i=0;i<25;i++)
	{
		for(int j=0;j<25;j++)
		{
			if(a[i][j]=='A')
			{
				c++;
			}
		}
	}
	printf("%d",c);
	return 0;
}
//AAAAAAABABBAABABABAAAAAAAABBBBBABBAABBBBBABABBBBBAABAAABABBBABAABBBBABAAABAABAAABABBBBBAABAABABAAABAABAAABABBABABBABABABAAABAABBBBBABBBABAABBBBABBBBBAAAAAAAABABABABABABAAAAAAABBBBBBBBABAABABBBBBBBBBBBAABAABABBAAABBAAABABBBBBAABBABABBBABBAAAABBBBAAAABBBBBAAABABAABABAABBBAABBABBAABABABAAAABBBAABBAAAAAABABBBABAABAABABABABBBBBAAAAABBBBBABBBBAAABBBABBABAABAABAAABAAABAABABABAAAAABBBBBBBBABABBBBABAABBABAABBBAAABAAABBBAAAAAAABAABBBBBBBBBABBAAABAABBBABBABAAAAAAABBAAABBBBABABAABBAABBBBBABBAABABAAABBBABBAAABAAABABABBBAAAAAAAAAABAAABAAABABABABBBABBAABBABAAABAAABABBABBABABAABAABAAAABBBBBABABBBBBABBAAAABAAAAAAAAAABAABBBAABABABBABBA

#include<stdio.h>
int main()
{
	int c=0;
	for(int i=1;i<=2021;i++)
	{
		int m=i;
		while(m)
		{
			if(m%10==2)
			{
				c++;
				break;
			}
			m/=10;
		}
	}
	printf("%d",c);
	return 0;
}
//

#include<stdio.h>
int main()
{
	int n=2021;
	int c=0;
	int q=0;
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;
			q++;
		}
		else
		{
			c=0;
			for(int i=2;i<=n;i*=2)
			{
				if((n+1)%i==0)
				{
					c++;
				}
				if((n-1)%i==0)
				{
					c--;
				}
			}
			if(c>0)
			{
				n+=1;
				q++;
			}
			else if(c<=0)
			{
				n-=1;
				q++;
			}
		}
   }
   printf("%d",q);
	return 0;
}
//


#include<stdio.h>
int main()
{
	int p=1;
	int a[4][5]={0};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i==0)
			{
				a[i][j]=p;
				p++;
			}
			else if(i!=0&&j==4)
			{
				a[i][j]=p;
			}
			
		}
	}
	return 0;
}
//


#include<stdio.h>
int main()
{
	int a=0;
	int t=0;
	scanf("%d %d",&a,&t);
	if(t%a==0)
	{
		printf("%d",t/a);
	}
	else
	{
		printf("%d",t/a+1);
	}
	return 0;
}
//


#include<stdio.h>
int main()
{
	int n=0;
	int k=0;
	scanf("%d",&n);
	if(n>99)
	{
		if(n<999)
		{
			k=n/100;
			printf("%d",k);
		}
		else
		{
			n/=100;
			k=n%10;
			printf("%d",k);
		}
	}
	else
	printf("%d",0);
	return 0;
}
//


#include<stdio.h>
int main()
{
	char a[25]="0";
	char b[25]="0";
	int i=0;
	int j=0;
	scanf("%s",a);
	while(1)
	{
		if(a[i]==0)
		{
			break;
		}
		else
		{
		
			if(a[i]!=',')
			{
				b[j]=a[i];
				i++;
				j++;
			}
			else
			{
				i++;
			}
    	}
	}
	printf("%s",b);
	return 0;
}
//


#include<stdio.h>
int main()
{
	int n=0;
	int m=0;
	int r=0;
	int c=0;
	a[100][100]={0};
	b[100][100]={0};
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<r;k++)
			{
				for(int y=0;y<c;y++)
				{
					a[k][y]==
				}
			}
		}
	}
	return 0;
}
//


#include<stdio.h>
int main()
{
	long long a=0ll;
	long long b=0ll;
	long long c=0ll;
	long long max=0ll;
	long long i=0ll;
	int k=0;
	int cot=0;
	scanf("%lld %lld %lld",&a,&b,&c);
	max=a>b?a:b;
	max=max>c?max:c;
	for(i=1;i<=max;i++)
	{
		k=0;
		if(a%i==0)
		{
			k++;
		}
		
		if(b%i==0)
		{
			k++;
			if(k==2)
			{
				cot++;
			}
			else if(c%i==0)
			{
				cot++;
			}
		}
		else if(c%i==0)
		{
			k++;
			if(k==2)
			{
				cot++;
			}
			else if(b%i==0)
			{
				cot++;
			}
		}
	}
	printf("%d",cot);
	return 0;
}
