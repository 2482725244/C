#include<stdio.h>
#include<string.h>
#define MAX 200
//类型声明
struct t
{
	char name[10];
	char sex[5];
	int age;
	long long int p;
 }zz[MAX]; 
//函数区 
 void print()
 {
 	printf("\n1.存储  2.删除\n3.查找  4替换\n5.显示  0.退出\n");
	printf("\n请做出选择\n"); 
  } 
 void Add(int count)
 {
 	printf("请输入联系人的名字\n"); 
	scanf("%s",zz[count].name);
	printf("请输入性别\n");
	scanf("%s",zz[count].sex);
	printf("请输入年龄\n");
	scanf("%d",&zz[count].age);
	printf("请输入电话号码\n");
	scanf("%d",&zz[count].p); 
	printf("存储成功\n");
 }
 void display(int count)
 {
 	printf("姓名   性别  年龄  电话号码\n");
	for(int i=0;i<count;i++)
	{
		printf("%s%6s%6d%12d\n",zz[i].name,
							   zz[i].sex,
							   zz[i].age,
							   zz[i].p);
	 } 
 }
//主函数区 
int main()
{
	int count=0;
	int n=0;
	memset(zz,0,sizeof(zz));
	do
	{
		print();
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				Add(count);
				count++;
				break;
			case 2:
			//	Del();
				break;
			case 3:
			//	Fint();
				break;
			case 4:
			//	Change();
				break;
			case 5:
				display(count);
				break;	
			case 0:
				break;	
			default:
				printf("输入错误，请重新输入");				
				break;
		}	
	}while(n);
	return 0;
}
