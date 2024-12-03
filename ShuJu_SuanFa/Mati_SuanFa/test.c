#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int t = 0;
//	int a[200] = { 0 };
//	int b[200] = { 0 };
//	int m = 1440;
//	int sum = 0;
//
//	scanf("%d %d", &n, &t);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if ((m - a[i]) < 60)
//		{
//			b[i] = 0;
//		}
//		else
//		{
//			b[i] = m - a[i];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		sum += b[i];
//		if (sum >= t)
//		{
//			printf("%d", i + 1);
//			return 0;
//		}
//	}
//	
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int a[200000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i + 1] > a[i])
//		{
//			count++;
//			if (count >= 3)
//			{
//				printf("True");
//				return 0;
//			}
//		}
//		else
//		{
//			count = 0;
//		}
//	}
//	printf("False");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int l = 0;
//	int tmp = 0;
//	int xl = 0;
//	int yl = 0;
//
//	scanf("%d%d%d", &x, &y,&l);
//
//	while (1)
//	{
//		tmp = l > x ? l - x : x - l;
//		if (l < tmp)
//		{
//			break;
//		}
//		else
//		{
//			l -= tmp;
//			xl += tmp;
//		}
//
//		tmp = l > y ? l - y : y - l;
//		if (l < tmp)
//		{
//			break;
//		}
//		else
//		{
//			l -= tmp;
//			yl += tmp;
//		}
//
//	}
//	
//	printf("%d %d", xl, yl);
//
//
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int a = 1; a <= i; a++)
//		{
//			for (int b = 1; b <= i; b++)
//			{
//				for (int c = 1; c <= i; c++)
//				{
//					if (a * b * c == i)
//					{
//						if(a)
//						count++;
//					}
//				}
//			}
//		}
//
//
//
//	}
//
//	printf("%d", count%3333);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char s[200000] = { 0 };
//	int a[3] = {0};
//	int count = 0;
//	int len = 0;
//	scanf("%s", s);
//	len = strlen(s);
//	if (len > 6)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			if (count == 2) 
//			{
//				printf("False");
//				return 0;
//			}
//			if (s[i] >= '0' && s[i] <= '9')
//			{
//				a[0] = 1;
//				count++;
//			}
//			if (s[i] >= 'a' && s[i] <= 'z')
//			{
//				a[1] = 1;
//				count = 0;
//			}
//			if (s[i] >= 'A' && s[i] <= 'Z')
//			{
//				a[2] = 1;
//				count = 0;
//			}
//		}
//		if (a[0]+a[1]+a[2] == 3)
//		{
//			printf("True");
//			return 0;
//		}
//	}
//	printf("False");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a[2000] = { 0 };
//	int b[2000] = { 0 };
//	int max = 0;
//	int ps = -1;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	scanf("%d", &m);
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n ; j++)
//		{
//			if (a[j] > max)
//			{
//				max = a[j];
//				ps = j + 1;
//			}
//		}
//		b[i] = ps;
//		a[ps - 1] = 0;
//		max = 0;
//	}
//	
//	for (int i = 0; i < m; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int y = 0;
//	int count = 0;
//	int c = 0;
//	
//	int a[4] = { 13,7,3,1 };
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		count += n / a[i];
//		n = n % a[i];
//	}
//
//	printf("%d", count);
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>

char w[100] = { 0 };
int index = 0;

int pow(int a, int n)
{
	int sum = a;
	for (int i = 0; i < n; i++)
	{
		sum *= 10;
	}
	return sum;
}

void changeEnglish(int count1, char* p1, char* px)
{
	int sum = 0;
	if (count1 == 1)
	{
		char c = *p1 - '0' + 97;
		w[index++] = c;
	}
	else
	{
		for (int i = 1; i <= count1; i++)
		{
			sum += pow(*p1, count1 - i);
		}

		int z = sum / 26;
		w[index++] = z + 97;
		int p = sum % 26;
		w[index++] = p + 97;

	}
}

void up(int sum)
{
	int a[100] = { 0 };
	int i = 0;
	int count = 0;

	while (sum) {
		count++;
		a[i] = sum % 10;
		sum /= 10;
	}
}


void changeNumber(int counta, char* p1, char* px)
{
	int g = 0;
	int sum = 0;
	if (counta % 2 == 0)
	{
		g = counta / 2;
		for (int i = 0; i < g; i++)//ba = 26,ca = 52
		{
			sum = (*p1 - 97) * 26 + *(p1 + 1) - 97;
			up(sum);
		}
	}
	else
	{
		g = counta / 2;

	}



}





int main()
{
	char s[100] = { 0 };
	int len = 0;
	int count1 = 0;
	int counta = 0;
	int sum = 0;

	scanf("%s", s);
	len = strlen(s);

	char* p1 = s;
	char* p2 = s;
	char* p3 = s;

	while (1)
	{
		if (*p1 >= '0' && *p1 <= '9')
		{
			while (*p2 >= '0' && *p2 <= '9')
			{
				p2++;
			}
			count1 = p2 - p1;
			changeEnglish(count1, p1, p2);
		}
			

		else
		{
			while (*p3 >= 'a' && *p3 <= 'z')
			{
				counta++;
				p3++;
			}
			counta = p3 - p1;
			changeNumber(counta, p1, p3);
		}
		


	}

	return 0;
}