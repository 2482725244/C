#include<stdio.h>
int main()
{
	int a[2] = {0};
	scanf("%d%d", &a[0], &a[1]);
	int sum = a[0]*0.4 + a[1]*0.6;
	printf("%d", sum);
} 
