
//实验一----第一题 
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
//第二题
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	int a=1,b=2,c=3,d=4,e=5;
	printf("%d\n",a+b+c+d+e);
	return 0;
 } 
//第三题
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	int r=0;
	scanf("%d",&r);
	double cycle=2*PI*r;
	double area=PI*r*r;
	printf("圆的周长为：%lf\n",cycle);
	printf("圆的面积为：%lf",area);
	return 0;
 } 

//实验二----第一题
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	double a=0,b=0,c=0;
	printf("请输入三个边长,注意：他要首先是一个三角形\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	double s=(a+b+c)/2.0;
	double F=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的三条边为：a=%lf,b=%lf,c=%lf,它的面积是:%lf",a,b,c,F);
	return 0;
 } 

//第二题
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	int  r=0,h=0;
	printf("请输入圆的半径：");
	scanf("%d",&r);
	printf("请输入圆柱的高:"); 
	scanf("%d",&h); 
	printf("圆的面积为：%.2f\n",PI*r*r); 
	printf("圆的周长为：%.2f\n",2*PI*r);
	printf("圆球的表面积为：%.2f\n",4*PI*r*r);
	printf("圆柱的体积为：%.2f\n",PI*r*r*h);   
	return 0;
 } 

//第三题
#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	//ax2+bx+c=0;
	float a=0,b=0,c=0;
	printf("请输入a，b，c的值"); 
	scanf("%f%f%f",&a,&b,&c);
	if(b*b-4*a*c>=0&&a!=0)
	{
		printf("该方程的第一个解X1为：%f\n",(-b+sqrt(b*b-4*a*c))/(2*a));
		printf("该方程的第二个解X2为：%f",(-b-sqrt(b*b-4*a*c))/(2*a));
	}
	else
	printf("该方程无解");
	return 0;
 } 

