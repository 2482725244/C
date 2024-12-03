//2135161039 孟德鹏 
#include<stdio.h>
main()
{
	int i;
	int a=0,b=0,c=0;
	char ch;
	printf("请输入十个字符\n"); 
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
	printf("英文字符有%d个，数字字符有%d个，其他字符有%d个",a,b,c);
 } 
