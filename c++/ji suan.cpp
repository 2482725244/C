#include<stdio.h>
main()
{
	int g;
	char ch=0,p;
	printf("请选择运算的种类，1加，2减,3乘，4除\n"); 
	scanf("%d",&g);
	getchar();
	switch(g)
	{
		case 1:
			printf("请按任意键继续运算\n");  
		while((ch=getchar())!=EOF)
		{
		int a,b,c;
		printf("请输入两个整数：\n");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("两数的和为：%d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
		break;
		case 2:
			printf("请按任意键继续运算\n");  
		while((ch=getchar())!=EOF) 
		{
		int a,b,c;
			printf("请输入两个整数，被减数先输入\n");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("结果是:%+d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
	}
	break;
	case 3:
		printf("请输入任意数继续:\n");
		while((ch=getchar())!=EOF)
		{
			int a,b,c;
			printf("请输入两个数:\n");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("结果为:%d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
	break;
	case 4:
		printf("请输入任意数继续:\n");
		while((ch=getchar())!=EOF)
		{
			double a,b,c;
			printf("请输入两个数，第一个/第二个:\n");
			scanf("%lf%lf",&a,&b); 
			c=a/b;
			printf("结果为:%f\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
	break;
	default:
	printf("输入错误");
	break; 
	}
}
