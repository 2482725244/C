#include<stdio.h>
main()
{
	int g;
	char ch=0,p;
	printf("��ѡ����������࣬1�ӣ�2��,3�ˣ�4��\n"); 
	scanf("%d",&g);
	getchar();
	switch(g)
	{
		case 1:
			printf("�밴�������������\n");  
		while((ch=getchar())!=EOF)
		{
		int a,b,c;
		printf("����������������\n");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("�����ĺ�Ϊ��%d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
		break;
		case 2:
			printf("�밴�������������\n");  
		while((ch=getchar())!=EOF) 
		{
		int a,b,c;
			printf("����������������������������\n");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("�����:%+d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
	}
	break;
	case 3:
		printf("����������������:\n");
		while((ch=getchar())!=EOF)
		{
			int a,b,c;
			printf("������������:\n");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("���Ϊ:%d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
	break;
	case 4:
		printf("����������������:\n");
		while((ch=getchar())!=EOF)
		{
			double a,b,c;
			printf("����������������һ��/�ڶ���:\n");
			scanf("%lf%lf",&a,&b); 
			c=a/b;
			printf("���Ϊ:%f\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
	break;
	default:
	printf("�������");
	break; 
	}
}
