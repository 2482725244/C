
//ʵ��һ----��һ�� 
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	printf("    *     \n");
	printf("   * *    \n");
	printf("  *   *   \n");
	printf(" *     *  \n"); 
	printf("  *   *   \n"); 
	printf("   * *    \n"); 
	printf("    *     \n");	
	printf("\n\n\n");
	printf("  ******\n");
	printf(" ********\n");
	printf("***********\n");
	printf("\n\n\n");
	printf("  ******\n");
	printf(" *      *\n");
	printf("***********\n");
	printf("\n\n\n");
	printf("   **** \n");
	printf("  *    * \n");
	printf(" *      * \n");
	printf("  *    * \n");
	printf("   **** \n");
	return 0;
}
//�ڶ���
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	int a=1,b=2,c=3,d=4,e=5;
	printf("%d\n",a+b+c+d+e);
	return 0;
 } 
//������
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	int r=0;
	scanf("%d",&r);
	double cycle=2*PI*r;
	double area=PI*r*r;
	printf("Բ���ܳ�Ϊ��%lf\n",cycle);
	printf("Բ�����Ϊ��%lf",area);
	return 0;
 } 

//ʵ���----��һ��
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	double a=0,b=0,c=0;
	printf("�����������߳�,ע�⣺��Ҫ������һ��������\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	double s=(a+b+c)/2.0;
	double F=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε�������Ϊ��a=%lf,b=%lf,c=%lf,���������:%lf",a,b,c,F);
	return 0;
 } 

//�ڶ���
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	int  r=0,h=0;
	printf("������Բ�İ뾶��");
	scanf("%d",&r);
	printf("������Բ���ĸ�:"); 
	scanf("%d",&h); 
	printf("Բ�����Ϊ��%.2f\n",PI*r*r); 
	printf("Բ���ܳ�Ϊ��%.2f\n",2*PI*r);
	printf("Բ��ı����Ϊ��%.2f\n",4*PI*r*r);
	printf("Բ�������Ϊ��%.2f\n",PI*r*r*h);   
	return 0;
 } 

//������
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	//ax2+bx+c=0;
	float a=0,b=0,c=0;
	printf("������a��b��c��ֵ"); 
	scanf("%f%f%f",&a,&b,&c);
	if(b*b-4*a*c>=0&&a!=0)
	{
		printf("�÷��̵ĵ�һ����X1Ϊ��%f\n",(-b+sqrt(b*b-4*a*c))/(2*a));
		printf("�÷��̵ĵڶ�����X2Ϊ��%f",(-b-sqrt(b*b-4*a*c))/(2*a));
	}
	else
	printf("�÷����޽�");
	return 0;
 } 

