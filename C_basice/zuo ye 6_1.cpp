 
#include<stdio.h>
main()
{
	int arr1[3][3]={1,2,3,4,5,6,7,8,9};
	int arr2[][3]={3,4,5,6,7,8,9};
	int arr3[3][3]={{1,2},{4,5},{7}};
	int arr4[3][3]={{1},{4}};
	printf("����arr1�������\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("����arr2�������\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	printf("����arr3�������\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	printf("����arr4�������\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr4[i][j]);
		}
		printf("\n");
	}
}
