#include<stdio.h>
#include<string.h>
#define MAX 200
//��������
struct t
{
	char name[10];
	char sex[5];
	int age;
	long long int p;
 }zz[MAX]; 
//������ 
 void print()
 {
 	printf("\n1.�洢  2.ɾ��\n3.����  4�滻\n5.��ʾ  0.�˳�\n");
	printf("\n������ѡ��\n"); 
  } 
 void Add(int count)
 {
 	printf("��������ϵ�˵�����\n"); 
	scanf("%s",zz[count].name);
	printf("�������Ա�\n");
	scanf("%s",zz[count].sex);
	printf("����������\n");
	scanf("%d",&zz[count].age);
	printf("������绰����\n");
	scanf("%d",&zz[count].p); 
	printf("�洢�ɹ�\n");
 }
 void display(int count)
 {
 	printf("����   �Ա�  ����  �绰����\n");
	for(int i=0;i<count;i++)
	{
		printf("%s%6s%6d%12d\n",zz[i].name,
							   zz[i].sex,
							   zz[i].age,
							   zz[i].p);
	 } 
 }
//�������� 
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
				printf("�����������������");				
				break;
		}	
	}while(n);
	return 0;
}
