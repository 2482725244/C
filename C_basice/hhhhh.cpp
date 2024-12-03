#include<stdio.h>
int pp(int x, int y)
{
	return x - y;
}
int sum(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 5, b = 6;
	int (*c[2])(int, int) = { sum,pp };
	int j = c[0](a, b);
	int k = c[1](a, b);
	printf("%d ", j);
	printf("%d ", k);
	return 0;
}
