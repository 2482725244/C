// �����ε���� 
#include<stdio.h> 
#include<math.h>
main()
{
	printf("�����������ε������ߣ�"); 
	double a,b,c,s,area;
	scanf("%lf%lf%lf",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε�����ǣ�%f",area);
}
