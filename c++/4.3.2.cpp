 
#include<stdio.h>
main()
{
	int p;
	printf("������һ���ٷ�������");
	scanf("%d",&p); 
	 switch(p/10)
	 {
	 	case 10:
	 	case 9:
	 		printf("�ɼ�����a"); 
	 		break;
	 	case 8:
	 		printf("�ɼ�����b");
	 		break;
	 	case 7:
	 		printf("�ɼ�����d");
	 		break;
	 	case 6:
	 		printf("�ɼ�����d");
	 		break;
	 	default:
	 		printf("�ɼ�����e");
	 }
 } 
