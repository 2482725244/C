#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//New Code

//t1

//#include<stdio.h>
//int main()
//{
//	printf("0%o 0x%x", 1234, 1234);
//
//
//	return 0;
//}


//t2

//#include<stdio.h>
//
//void p_reverse(int n)
//{
//	while (n) {
//		if (n >= 10)
//			printf("%d", n % 10);
//		else
//			printf("%d", n);
//		n /= 10;
//	}
//}
//
//int main()
//{
//	int input = 0;     //1234
//	scanf("%d", &input);
//
//	p_reverse(input);
//
//	return 0;
//}

//t4

//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("Hello world!\n")-1);
//	return 0;
//}



//t5
//#include<stdio.h>
//int main()
//{
//	char mbe[20];
//	int cLan = 0;
//	int math = 0;
//	int english = 0;
//
//	scanf("%s", mbe);
//	scanf("%d", &cLan);
//	scanf("%d", &math);
//	scanf("%d", &english);
//
//	printf("学号%s,C语言%d,数学%d,英语%d", mbe, cLan, math, english);
//	return 0;
//}


//t6

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	char chs[5][9] = {0};
//	
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			chs[i][j] = ' ';
//		}
//
//	}
//
//	chs[0][4] = ch;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (chs[i][j] == ch)
//			{
//				chs[i + 1][j - 1] = ch;
//				chs[i + 1][j + 1] = ch;
//			}
//		}
//		
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			printf("%c", chs[i][j]);
//		}
//		printf("\n");
//	}
//}



//#include<stdio.h>
//    int main()
//    {
//        int x = 0, y = 0, n = 0;
//
//        scanf("%d%d%d", &x, &y, &n);
//
//        for (int i = 0; i < n; i++)
//        {
//            if (x > y || x == y)
//            {
//                y += x / 2;
//                x -= x / 2;
//            }
//            else
//            {
//                x += y / 2;
//                y -= y / 2;
//            }
//        }
//        printf("%d %d", x, y);
//        return 0;
//    }

//宏
//#include<stdio.h>
//
//#define MAX 100
//#define ADD(X,Y) X+Y
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//int sum = Add(a, b)*3;
//	int sum = ADD(a, b) * 3;
//	printf("%d", sum);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%#o %#X", 1234, 1234);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double a = 3.0;
//	int b = 5;
//	//printf("%05d", b);
//	printf("%d", 012);
//	printf("%d", 0x12);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch+32);
//		//printf("\n");
//		getchar();
//	}
//	
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//
//	while ((scanf("%c", &ch)) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		scanf("%c", &ch);
//	}
//	
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%d\n", a);
//	printf("%d", 0xABCDEF);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//
//	scanf("%3d%2d%2d", &y, &m, &d);
//
//	printf("%d %d %d", y, m, d);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		printf("%d\n", n << 1);
//	}
//
//	return 0;
//}


//文件测试
//#include<stdio.h>
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	char c = 0;
//	char ch[1024];
//
//	FILE* pf = fopen("test.text", "w");
//	//FILE* pf = fopen("test.text", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//	}
//	printf("打开文件成功\n");
//
//	//fputc('a', pf);
//	//fputc(98, pf);
//	//fputc(99, pf);
//	//fputc('d', pf);
//	//fputs("qwertyuiop\n\n", pf);
//
//
//	//fprintf(pf, "%d %d %c", 12, 13, 97);
//	//fscanf(stdin, "%d%d%d", &a,&b,&c);
//	//fprintf(stdout, "%d", a);
//
//	//printf("%s", fgets(ch,1024,pf));
//	
//
//	fclose(pf);
//
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//
//extern int my_strlen(char* chs);
//int main()
//{
//	char chs1[] = "abcakkkbc";
//	int len = my_strlen(chs1);
//	printf("%d\n", len);
//
//	printf("%d\n", (int)strlen(chs1));
//	return 0;
//}
//
////abc
//int my_strlen(char* const chs)
//{
//	static int count = 0;
//	if (!*chs)
//	{
//		return count;
//	}
//	else
//	{
//		count++;
//		my_strlen(chs + 1);
//	}
//	return count;
//}

//#include<stdio.h>
//int main() {
//
//	int a = 5;
//	printf("%#3d", a);
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	int a = 6;
//	int arr[10] = { 0 };
//	int count = 0;
//	int* ps = arr;
//	while (a)
//	{
//		*ps = a % 6;
//		ps++;
//		count++;
//		a /= 6;
//	}
//	for (int i = count - 1; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//二分查找
//#include<stdio.h>
//int main()
//{
//	//123456789
//	//找6
//	int  n = 3;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int ph = 0;
//	int pt = 9;
//	int avg = 0;
//	while (ph <= pt)
//	{
//		avg = (ph + pt) / 2;
//		if (n > arr[avg])
//		{
//			ph = avg + 1;
//		}
//		else if (n < arr[avg])
//		{
//			pt = avg - 1;
//		}
//		else
//		{
//			printf("找到了下标为 %d\n", avg);
//			return 0;
//		}
//	}
//	printf("找不到\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int sum = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//
//	printf("%d ", sum);
//	printf("%d ", (1 + n) * n / 2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int hour = 0;
//	int min = 0;
//	int k = 0;
//
//	while (scanf("%d:%d %d", &hour, &min, &k) != EOF)
//	{
//		min += k % 60;
//		hour += k / 60;
//
//		if (min >= 60)
//		{
//			hour += min / 60;
//			min = min % 60;
//		}
//		
//		if (hour >= 24)
//		{
//			hour -= 24;
//		}
//
//		printf("%02d:%02d\n", hour, min);
//	}
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 12 + 1;
//	int count = n / 12;
//
//		if (n % 12 != 0)
//		{
//			printf("%d", count * 4 + 2);
//		}
//		else
//		{
//			printf("%d", count * 4 - 2);
//		}
//	
//	return 0;
//}


//#include<stdio.h>
//
//int fbnq(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	
//	return fbnq(n - 1) + fbnq(n - 2);
//}
//
//
//int main()
//{
//	int n = 5;
//	printf("%d",fbnq(n));
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int tmp = 0;
//	int arr[10000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		arr[tmp] = tmp;
//	}
//	for (int i = 0; i < 10000; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch[] = "abc";
//
//	/*for (int i = 0; i < 4; i++)
//	{
//		printf("%s ", ch);
//	}*/
//
//	int count = 0;
//	//printf("%d", count);
//	count = printf("%c", 0);
//	printf("%d", count);
//
//	return 0;
//}


//#include<stdio.h>
//98 7 6 5 4321
//
//void Select_Sort(int b[], int a)
//{
//	for (int i = 1; i < a;i++)
//	{
//		int end = i;
//		int tmp = b[end];
//		while (end > 0)
//		{
//			if (tmp < b[end - 1])
//			{
//				b[end] = b[end - 1];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		b[end] = tmp;
//	}
//}
//	
//
//
//int main()
//{
//	int arr[] = { 4,5,3,7,9,8,2,0,12,15,0 };
//	int leng = sizeof(arr) / sizeof(arr[0]);
//
//	Select_Sort(arr, leng);
//	for (int i = 0; i < leng; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//
//double Select(int n)
//{
//    return 1.0 / (n*n);
//}
//
//int main()
//{
//	int n = 1;
//	double sum = 0.0;
//	double result = 0.0;
//	double k = 0.0000001;
//	while (1)
//	{
//		if(Select(n) < k)
//		{
//			break;
//		}
//		n++;
//		10000 10000
//	}
//	for (int i = 1; i < n; i++)
//	{
//		sum += Select(i);
//	}
//
//	result = sum * 6.0;
//	result = sqrt(result);
//	printf("%.4lf", result);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct flower
//{
//    char name[25];
//    int score;
//}flower;
//
//int main()
//{
//    int min = 100000;
//    char names[25];
//    int n = 0;
//    flower* arr[1000] = { 0 };
//    int count = 0;
//
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        flower* pt = NULL;
//        flower * f = (flower*)malloc(sizeof(flower));
//
//        scanf("%s %d", &(f->name), &tmp);
//
//        for (int i = 0; i < count; i++)
//        {
//            if (!strcmp(arr[i]->name, f->name))
//            {
//                free(f);
//                f = NULL;
//                arr[i]->score += tmp;
//                pt = arr[i];
//                break;
//            }
//        }
//
//        if (f != NULL)
//        {
//            arr[count] = f;
//            pt = f;
//            count++;
//            f->score = 1000 + tmp;
//        }
//       
//
//        if (min > pt->score)
//        {
//            min = pt->score;
//            strcpy(names, pt->name);
//        }
//    }
//    printf("%s\n", names);
//    printf("%d", min);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n == 1)
//    {
//        printf("O");
//        return 0;
//    }
//    if (n == 2)
//    {
//        printf("P");
//        return 0;
//    }
//    for (int i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//        {
//            printf("%d", i);
//            if (n % 2 == 0)
//            {
//                printf("E");
//                return 0;
//            }
//            else
//            {
//                printf("O");
//                return 0;
//            }
//        }
//    }
//    printf("P");
//    return 0;
//}




//#include<stdio.h>
//int Judge(int a)
//{
//    int count = 0;
//    while (a)
//    {
//        count++;
//        a /= 10;
//    }
//    return count;
//}
//
//
//int main()
//{
//    int a = 0;
//    int tmp = 0;
//    char s[50];
//    int count = 0;
//    scanf("%d", &a);
//    tmp = a;
//    if (a < 10)
//    {
//        printf("%d", a);
//    }
//    else
//    {
//        int count = Judge(tmp);
//        int len = 0;
//        int j = 0;
//        char chs[50];
//        char* tail = s + count - 1;
//        int w = 0;
//        while (tmp)
//        {
//            s[count - 1] = tmp % 10 + 48;
//            tmp /= 10;
//        }
//        //1 2800 00000
//        while (*tail == 48)
//        {
//            tail--;
//        }
//        len = tail - s + 1;
//        printf("%d", len);
//
//        for (int i = 0; i < len + 1; i++)
//        {
//            if (i == 1)
//            {
//                chs[i] = '.';
//                continue;
//            }
//            chs[i] = s[j];
//            j++;
//        }
//        len = len + 1;
//        chs[len] = 'E';
//        chs[len + 1] = 48 + count - 1;
//        printf("%s", chs);
//    }
//    return 0;
//}

//#include<stdio.h>
//#define N 3
//int main()
//{
//	double a[N][3] = { 0 };
//	double avg = 0.0;
//
//	for (int i = 0; i < N; i++)
//	{
//		double sum = 0.0;
//		printf("请输入第%d位同学的成绩\n",i+1);
//
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%lf", &a[i][j]);
//			sum += a[i][j];
//		}
//		avg = sum / 3;
//		printf("该同学平均成绩为%lf\n", avg);
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//
//double Select(int n)
//{
//	return 1.0 / (n * n);
//}
//
//int main()
//{
//	int n = 1;
//	double sum = 0.0;
//	double result = 0.0;
//	double k = 0.0000001;
//	while (1)
//	{
//		if (Select(n) < k)
//		{
//			break;
//		}
//		n++;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		sum += Select(i);
//	}
//
//	result = sum * 6.0;
//	result = sqrt(result);
//	printf("%.4lf", result);
//	return 0;
//}
//

#include<stdio.h>


void Select_Sort(int b[], int a)
{
	for (int i = 1; i < a; i++)
	{
		int end = i;
		int tmp = b[end];
		while (end > 0)
		{
			if (tmp < b[end - 1])
			{
				b[end] = b[end - 1];
				end--;
			}
			else
			{
				break;
			}
		}
		b[end] = tmp;
	}
}



int main()
{
	int arr[] = { 4,5,3,7,9,8,2,0,12,15,0 };
	int leng = sizeof(arr) / sizeof(arr[0]);

	Select_Sort(arr, leng);
	for (int i = 0; i < leng; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
