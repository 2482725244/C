 
#include<stdio.h>
main()
{
	int p;
	printf("请输入一个百分制数据");
	scanf("%d",&p); 
	 switch(p/10)
	 {
	 	case 10:
	 	case 9:
	 		printf("成绩属于a"); 
	 		break;
	 	case 8:
	 		printf("成绩属于b");
	 		break;
	 	case 7:
	 		printf("成绩属于d");
	 		break;
	 	case 6:
	 		printf("成绩属于d");
	 		break;
	 	default:
	 		printf("成绩属于e");
	 }
 } 
