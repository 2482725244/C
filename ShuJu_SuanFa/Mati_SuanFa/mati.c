#define _CRT_SECURE_NO_WARNINGS 1


//对应的n中有n!个麦子，问1-n中一共多少麦子
//如果n是8的倍数则没有麦子；


//#include<stdio.h>
//
//int Sum(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d%d", &i, &j);
//
//	for (int p = i; p <= j; p++)
//	{
//		if (p % 8 != 0)
//		{
//			sum+=Sum(p);
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}



//给定一段大写字母字符串，只包含大写字母，求出现最多的大写字母是哪个，
//若数量相同则输出字母顺序靠前的；

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int len = 0;
//	int tmp = 0;
//	int english = -1;
//	int max = 0;
//	char s[200000];
//	char arr[26] = { 0 };
//	scanf("%s", s);
//	len = strlen(s);
//	
//	for (int i = 0; i < len; i++)
//	{
//		tmp = s[i] - 'A';
//		arr[tmp]++;
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			english = i;
//		}
//	}
//
//	printf("%c", english + 65);
//
//	return 0;
//}



//找出最高成绩和最低成绩的差值；

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//
//	int max = 0;
//	int min = 10000;
//
//	int tmp = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//		if (tmp < min)
//		{
//			min = tmp;
//		}
//	}
//
//	printf("%d", max - min);
//}



//第n行打印n个*，如果是三的倍数则打印一个 |
// 输入一个n，输出打印后的图形
// 
// 
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("|\n");
//		}
//		else
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		
//	}
//
//	return 0;
//}



//给定一个字符串，找出字符串每个k所对应的字符所组成的新串
// 如k=3
// 例abcdefg
// 新adg
// 
// 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s1[200000] = { 0 };
//	char s2[200000] = { 0 };
//	int k = 0;
//	int len = 0;
//
//	scanf("%d%s", &k, s1);
//	len = strlen(s1);
//
//	//asdfghjk
//	//afj  3
//	for (int i = 0; i < len; i++)
//	{
//		if (k * i < len)
//		{
//			s2[i] = *(s1 + k * i);
//		}
//
//	}
//
//	printf("%s", s2);
//	return 0;
//}



//一个数如果是3的倍数或是含有3就标记一次
//一个数如果是5的倍数或是含有5就另标记一次
//若一个数同时满足上面两项则再另标记一次
//给定一个n,问从1-n,分别标记了几次


//#include<stdio.h>
//int Fun(int n)
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	while (n)
//	{
//		if (n % 10 == 3)
//		{
//			sum1 = 3;
//		}
//		if (n % 10 == 5)
//		{
//			sum2 = 5;
//		}
//		sum = sum1 + sum2;
//		if (sum == 8)
//		{
//			return 8;
//		}
//		n /= 10;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int n = 0;
//	int a[3] = { 0 };
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 3 == 0 || Fun(i) == 3 || Fun(i) == 8)
//		{
//			if (i % 5 == 0 || Fun(i) == 5 || Fun(i) == 8)
//			{
//				a[2]++;
//			}
//			a[0]++;
//		}
//		else if (i % 5 == 0 || Fun(i) == 5 || Fun(i) == 8)
//		{
//				if (i % 3 == 0 || Fun(i) == 3 || Fun(i) == 8)
//				{
//					a[2]++;
//				}
//				a[1]++;
//		}
//
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//
//
//	return 0;
//
//}



//问s1是否包含s3这样的子串
// 
//但是s1为  a!b!x!c!d!f!g的特殊串
//    s2为  cdef         的普通串
//s2为s1的字串

// 
// 
#include<stdio.h>
int main()
{
	char s1[200000] = { 0 };
	char s2[200000] = { 0 };
	char s3[200000] = { 0 };
	char s4[200000] = { 0 };

	int len1 = 0;
	int len2 = 0;
	int j = 0;
	int p = 0;
	char* flag = NULL;

	scanf("%s %s", s1, s2);

	len1 = strlen(s1);
	len2 = strlen(s2);
	for (int i = 0; i < len1; i++)
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			s3[j] = s1[i];
			j++;
		}
	}
	for (int i = 0; i < len2; i++)
	{
		if (s2[i] >= 'A' && s2[i] <= 'Z')
		{
			s4[p] = s2[i];
			p++;
		}
	}

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);

	flag = strstr(s3, s4);

	if (flag != NULL)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}

	return 0;
}



//判断正方形矩阵斜对角线字符是否都不相同





//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a[110][110] = { 0 };
//	scanf("%d", &n);
//	getchar();
//
//	printf("%d\n", n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%c", &a[i][j]);
//		}
//		getchar();
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%c", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	//123
//	//123
//	//123
//
//	int p = 0;
//	for (p = 1; p < n; p++)
//	{
//		if (a[p-1][p-1] == a[p][p])
//		{
//			break;
//		}
//	}
//
//	if (p != n)
//	{
//		printf("refuse");
//	}
//	else
//	{
//		printf("accept");
//	}
//
//	return 0;
//}




//在正方形矩阵中，一位行者从【0】【0】位置开始顺序出发，
//若脚下对应数字为质数T，则行走T%10后的步数，否则走一步，
//若是走出该行则刷新至下一行起点，直至走出棋盘
//问他直接踩过（落脚点）几个质数，不算越过的。




//#include<stdio.h>
//int Fun(int n)
//{
//	int i = 0;
//	if (n == 2)
//	{
//		return 1;
//	}
//	if (n <= 1)
//	{
//		return 0;
//	}
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	if(i == n)
//		return 1;
//}
//
//int main()
//{
//	int tmp = 0;
//	int a[200][200] = { 0 };
//	int n = 0;
//	int m = 0;
//	int h = 0;
//	int l = 0;
//	int count = 0;
//	scanf("%d%d", &n, &m);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	
//	while (h!=n)
//	{
//		if (Fun(a[h][l]) == 0)
//		{
//			l += 1;
//			if (l >= m)
//			{
//				h++;
//				l = 0;
//			}
//		}
//		else if (Fun(a[h][l]) == 1)
//		{
//			count++;
//			l += a[h][l] % 10;
//			if (l >= m)
//			{
//				h++;
//				l = 0;
//			}
//
//		}
//	}
//	
//	printf("%d", count);
//
//
//	return 0;
//}

