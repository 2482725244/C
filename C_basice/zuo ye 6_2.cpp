//2135161024 ��� 
#include<stdio.h>
main()
{
	int arr[3][3]={10,20,30,40,50,60,70,80,90};
	printf("���������\n"); 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("����ת����\n");
	for(int i=0;i<2;i++)
	{
		for(int j=1;j<3;j++)
		{
			int t=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=t;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 } 
