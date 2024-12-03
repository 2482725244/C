#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h> 
#include<errno.h>
#include<assert.h> 

/*#include<string.h>
#include<stdio.h>
struct Book{
	char mc[20];
	short jg;
};
main()
{
	struct Book b1={"c++",75};
	struct Book*p=&b1;
	printf("书的名称%s\n",b1.mc);
	printf("书的价格是%d\n",b1.jg);
//	*p.jg=60;
//	b1.mc="jave";
	b1.jg=55;
//	strcpy(b1.jg,60);
	strcpy(b1.mc,"jave");
	printf("书修改后的名称%s\n",b1.mc);
	printf("书修改后的价格是%d\n",b1.jg);
}
#include<stdio.h>
main()
{
	int a=1;
	a=3;
	printf("%d\n",a);
}
#include<stdio.h>
#include<string.h>
main()
{
	char arr[20]="abcd";
	//printf("%s\n",arr);
	strcpy(arr,"aaaaaa");
	printf("%s\n",arr);
}
#include<string.h>
#include<stdio.h>
struct Book{
	char mc[20];
	short jg;
};
main()
{
	struct Book b1={"c++",75};
	struct Book*p=&b1;
	printf("书的名称%s\n",p->mc);
//	printf("书的价格是%d\n",(*p).jg);
	printf("书的价格是%d\n",p->jg);
}
#include<stdio.h>
main()
{
	int a=6,b=7,c=8;
	c=(a>b&&c>a);
	printf("%d",c);	
}
#include<stdio.h>
main()
{
	int a=0,b=0,c=0,max;
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b,a>c)
		printf("最大值是：%d",a);
	else if(b>c,b>a)
		printf("最大值是：%d",b);
	else 
	printf("最大值是：%d",c);
 }   
#include<stdio.h>
main()
{
	int a=0,b=0,c=0,max;
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		max=a;
	else if(b>c&&b>a)
		max=b;
	else 
		max=c;
	printf("最大值是：%d",max);
 }
#include<stdio.h>
main()
{
	int a;
	printf("请输入一个整数\n"); 
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("星期1\n");
			break;
		case 2:
			printf("星期2\n");
			break;
		case 3:
			printf("星期3\n");
			break;
		case 4:
			printf("星期4\n");
			break;
		case 5:
			printf("星期5\n");
			break;
		case 6:
			printf("星期6\n");
			break;
		case 7:
			printf("星期日\n");
			break;
		default:
			printf("输入错误");
	 } 
 }
#include<stdio.h>
main()
{
	int a=0;
	printf("请输入一个整数：");
	scanf("%d",&a);
	switch(a)
	{
		case 1: 
			printf("第一");
		break;
		case 2:
			printf("第二");
		break;
		case 3: 
			printf("第三");
		break;
		case 4:
			printf("第四");
		break;
		case 5: 
			printf("第五");
		break;
		case 6:
			printf("第六");
		break;
		case 7:
			printf("第七");
		break;
		default:
			printf("输入错误"); 
		break;
	}	
}
#include<stdio.h>
main()
{
	int i=0;
	while(i<100)
	{
		i++;
		if(i==5)
		continue;
		if(i==12)
		break;
		printf("%-5d",i);
	}
}
#include<stdio.h>
main()
{
	int i=0;
	while(i<10)
	{
		i++;
		if(i==5)
		continue;
		printf("%-5d",i);
	}
}
//循环计算 
#include<stdio.h>
main()
{
	char ch=0,p;
	while((ch=getchar())!=EOF)
	{
		int a,b,c;
		printf("请输入两个整数：\n");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("两数的和为：%d\n",c);
		while((p=getchar())!='\n')
		{
			;
		}
	}
	printf("感谢您的使用！"); 
}
//计算完整版 
#include<stdio.h>
main()
{
	int g;
	char ch=0,p;
	printf("请选择运算的种类，1加，2减,3乘，4除\n"); 
	scanf("%d",&g);
	getchar();
	switch(g)
	{
		case 1:
			printf("请按任意键继续运算\n");  
		while((ch=getchar())!=EOF)
		{
		int a,b,c;
		printf("请输入两个整数：\n");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("两数的和为：%d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
		break;
		case 2:
			printf("请按任意键继续运算\n");  
		while((ch=getchar())!=EOF) 
		{
		int a,b,c;
			printf("请输入两个整数，被减数先输入\n");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("结果是:%+d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
	}
	break;
	case 3:
		printf("请输入任意数继续:\n");
		while((ch=getchar())!=EOF)
		{
			int a,b,c;
			printf("请输入两个数:\n");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("结果为:%d\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
	break;
	case 4:
		printf("请输入任意数继续:\n");
		while((ch=getchar())!=EOF)
		{
			double a,b,c;
			printf("请输入两个数，第一个/第二个:\n");
			scanf("%lf%lf",&a,&b); 
			c=a/b;
			printf("结果为:%f\n",c);
			while((p=getchar())!='\n')
			{
				;
			}
		}
	break;
	default:
	printf("输入错误");
	break; 
	}
}




#include<stdio.h>
main()
{
	int x,y;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	if(x>5)
		y=x+3;
	else if(x>=0&&x<=5)
		y=0;
	else
		y=2*x+30;
	printf("%d",y);
}
#include<stdio.h>
main()
{
	int n,a=1,i=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("%d",a);
}
#include<stdio.h>
main()
{
	int n,a=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("%d",a);
 }
#include<stdio.h>
main()
{
	int n,a=1,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
		c=c+a;
	}
	printf("%d",c);
}
#include<stdio.h>
main()
{
	long int arr[20]={1,2,3,4,5,6,7,8,9,10},i,k=17;
	for(i=0;i<sizeof arr/sizeof arr[0];i++)
	{
		if(k==arr[i])	
		printf("找到了，下标是%d",i); 
	}
}

#include<stdio.h>
#include<string.h>
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int l=0;
	int sz=sizeof (arr)/sizeof (arr[0]);
	int r=sz-1;
	while(l<=r)
	{
	int m=(r+l)/2;
	int k=6;
		if(arr[m]<k)
		{
			l=m+1;
		}	 
		else if(arr[m]>k)
		{
			r=m-1;
		}
		else
		{
			printf("找到了，下标是%d",m);
			break;
		}
	}
	if(l>r)
	printf("找不到"); 	
} 
/*
#include<stdio.h>
#include<string.h>
main()
{
	int u,t;
	char arr[]="asdfghjkl";
	u=strlen(arr);
	printf("%d\n",u);
	t=sizeof (arr)/sizeof (arr[0]);
	printf("%d\n",t);
}
#include<stdio.h>
#include<string.h> 
main()
{
	char arr1[]="abcd";
	char arr2[]="qwer";
	strcpy(arr1,arr2);
	strcpy(arr2,"bgm");
	printf("arr1=%s  arr2=%s",arr1,arr2);
}
#include<stdio.h>
#include<string.h> 
main()
{
	char arr[]="qwertyu";
	printf("%s",arr);
	strcmp(arr,'*',3);
	printf("%s",arr);
}

#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char password[]="0";
	for(i=0;i<3;i++)
	{
		printf("请输入密码，你只有三次机会！\n");
		scanf("%s",&password);
		if((strcmp(password,"1234567890"))==0)
		{
			printf("登陆成功！\n");
		break;
		}	 	
	}
	if(i==3)
	printf("输入错误，请退出！\n"); 	 
}
//超多引入； 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h> 
main()
{
	char arr1[]="hello jave!";
	char arr2[]="***********";
	int l,r;
	r=(strlen(arr1))-1;
	for(l=0;l<=r;l++,r--)
	{
	arr2[l]=arr1[l];
	arr2[r]=arr1[r];
	printf("%s\n",arr2);
	Sleep(1000);
	system("cls");
	}
	printf("hello jave");
 }
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
main()
{
	int i;
	for(i=0;i<100;i++)
	{
		printf("%d",i);
		Sleep(10);
		system("cls");
	}
 }
#include<stdio.h>
Add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
main()
{
	int a=10,b=20,sum;
	sum=Add(a,b);
	printf("%d",sum);
}
#include<stdio.h>
void h(int* x,int* y)
{
	int p;
	p=*x;
	*x=*y;
	*y=p;
}
main()
{
	int a=10,b=20;
	printf("%d %d\n",a,b);
	h(&a,&b);
	printf("%d %d\n",a,b);
}
#include<stdio.h>
int C(int arr[],int k,int sz)
{
	int mid=0;
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
		return mid;
	}
	if(left>right)
	return -1;
}
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=6;
	int g=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	if((g=C(arr,k,sz))==-1)
	{
		printf("找不到"); 
	}
	else
	printf("找到了，下标是%d",g);
 } 
#include<stdio.h>
int CZ(int arr[],int k,int sz)
{
	int left=0;
	int right=sz-1;
	int mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>k)
		{
		right=mid-1;	
		}
		else if(arr[mid]<k)
		{
			left=mid+1;
		}
		else
		return mid;
	}
	if(left>right)
	return -1;
}
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof (arr[0]);
	int k=6;
	if(CZ(arr,k,sz)==-1)
	{
		printf("找不到！"); 
	}
	else
	printf("找到了，下标是%d",CZ(arr,k,sz));
}
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
main()
{
	int i;
	char arr1[]="浮世三千";
	char arr2[]="吾爱有三";
	char arr3[]="日 月与卿";
	char arr4[]="日为朝，月为暮";
	char arr5[]="卿为";
	char arr6[]="朝朝暮暮！";
	for(i=30;i>0;i--)
	{
		printf("%1497d",i);
		Sleep(10);
		system("cls");
	}
		printf("%1497s",arr1);
	Sleep(1000);
	system("cls");
		printf("%1497s",arr2);
	Sleep(1000);
	system("cls");
		printf("%1497s",arr3);
	Sleep(1000);
	system("cls");
		printf("%1497s",arr4);
	Sleep(1000);
	system("cls");
		printf("%1497s",arr5);
	Sleep(1000);
	system("cls");
		printf("%1497s",arr6);
}


#include<stdio.h>
main() 
{
	int i;
	for(i=0;i<100;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
#include<stdio.h>
main()
{
	int p;
	char arr[]="a,b,c";
	p=sizeof(arr)/sizeof(arr[0]);
	printf("%s\n",arr);
	printf("%d",p);
}  
#include<stdio.h>
main()
{
	int x,y;
	printf("请输入x的值");
	scanf("%d",&x); 
	if(x>5)
	y=x+3;
	else if(x>=0&&x<=5)
	y=0;
	else
	y=2*x+30;
	printf("%d",y);
 } 
#include<stdio.h>
main()
{
	char arr1[8]="asdfggh";
	//char arr2[]={'a','b','c'};
	printf("%c\n",arr1[2]);
	//printf("%s\n",arr2);
}
#include<stdio.h>
int my_strlen(char arr[])
{
	if(*arr!='\0')
	{
	arr++;
	return 1+my_strlen(arr);
	}
	else
	return 0;
}
main()
{
	int len;
	char arr1[]="asd";
	len=my_strlen(arr1);
	printf("%d",len);
}
#include<stdio.h>
int my_fbnq(int n)
{
	if(n<3)
	return 1;
	else
	return my_fbnq(n-1)+my_fbnq(n-2);
	
}
main()
{
	int n,p;
	scanf("%d",&n);
	p=my_fbnq(n);
	printf("%d",p);
}
#include<stdio.h>
main()
{
	int i;
	char arr[]="asdgh";
	for(i=0;i<5;i++)
	{
		printf("arr[%d]=%p\n",i,arr[i]);
	}
}
#include<stdio.h>
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<10;i++)
	{
		printf("arr[%d]=%p\n",i,arr[i]);
	}
}
#include<stdio.h>
int my_fb(int n)
{
	int a,b,c;
	a=1;
	b=1;
	c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
 } 
main()
{
	int n,p;
	scanf("%d",&n);
	p=my_fb(n);
	printf("%d",p);
 }
#include<stdio.h>
void my_fd(int n)
{
	if(n>9)
	{
		my_fd(n/10);
	}
	else 
	printf("%d ",n);
}
main()
{
	int n;
	scanf("%d",&n);
	my_fd(n);
}
#include<stdio.h>
#define j 3
#define i 3
main()
{
	int p,q;
	int arr[j][i]={{1,2,3},{4,5,6},{7,8,9}};
	for(p=0;p<j;p++)
	{
		for(q=0;q<i;q++)
		{
			printf("%d\n",arr[p][j]);
		}
		
	}
}
#include<stdio.h>
main()
{
	int a=3,b=3;
	int arr[a][b]={1,2,3,4,5,6,7,8,9};
	printf("%d",arr[1][1]);
}
#include<stdio.h>
void px(int arr[],int sz)
{
	int i,j,p;
	for(j=0;j<sz-1;j++)
	{
		p=1;
		for(i=0;i<sz-1;i++)
		{
			int t;
			if(arr[i]>arr[i+1])
			{
				p=0;
				t=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=t;
			}
		}
		if(p==1)
		break;
	}
}
main()
{
	int sz;
	int i;
	int arr1[]={11,10,9,8,7,6,5,4,3,2,1};
	int arr2[]={1,3,2,4,6,5,7,8,9};
	int arr3[]={1,2,3,4,5,6,7,8,9};
	sz=sizeof(arr2)/sizeof(arr2[0]);
	px(arr2,sz);
	for(i=0;i<sz;i++)
	{
		printf("arr2[%d]=%d\n",i,arr2[i]);
	}	
}
#include<stdio.h>
struct g
{
	char n[20];
	int s;
	char arr[20];
};
main()
{
	struct g t={"小明",20,"tjmc123456789"};
	struct g* p=&t;
	printf("%s\n",t.n);
	printf("%d\n",t.s);
	printf("%s\n",t.arr);
	printf("\n");
	printf("%s\n",p->n);
	printf("%d\n",p->s);
	printf("%s\n",p->arr);
	printf("\n");
	printf("%s\n",(*p).n);
	printf("%d\n",(*p).s);
	printf("%s\n",(*p).arr);
	
 } 
#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	printf("%d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d",a,b);
}
#include<stdio.h>
main()
{
	int i;
	int arr[10]={6,5,4,3,2,1,0,8,9,10};
	int* p=arr;
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(p=arr;p<&arr[10];p++)
	{
		*p=0;
		printf("%d\n",*p);
	}
 }
#include<stdio.h>
int _strlen(char* str)
{
	int q;
	char* f=str;
	char* e=str;
	while(*e!='\0')
	{
		e++;
	}
	q=e-f;
	return q;
}
main()
{
	int len;
	char ch[]="asdfghjkl";
	len=_strlen(ch);
	printf("%d",len);
}
#include<stdio.h>
main()
{
	int a=10;
	int b=0;
	b=a<<1;
	printf("%d",b);
}
#include<stdio.h>
main()
{
	int arr[10]={0};
	int i;
	int* p=arr;
	for(i=0;i<10;i++)
	{
		*p=i;
		printf("%d\n",*p);
		printf("%d\n",arr[i]);
		p++;
	}
}
#include<stdio.h>
main()
{
	int a=10;
	int* p=&a;
	printf("%d\n",a);
	printf("%d\n",*p);
	*p=20;
	printf("%d\n",a);
	printf("%d\n",*p);
	int* * pp=&p;
	**pp=30;
	printf("%d\n",a);
}
#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	int c=30;
	int* arr[3]={&a,&b,&c};
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	*(arr[0])=1;
	*(arr[1])=2;
	*(arr[2])=3;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
}
#include<stdio.h>
main()
{
	int m,n;
	int i,j;
	int c=0;
	int p=0;
	printf("请规定m,n的区间m>=1,n<=300\n");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{ 
			if(i%j==0)
				c++;
			if(c>=3)
			break;
		}
		 if(c<3)
		 {
		 	printf("%d\t",i);
		 	p++;
		 }
		 if(p==8)
		 {
		 	printf("\n");
		 	p=0;
		 }
	}
}
#include<stdio.h>
struct f
{
	int e;
	char arr1[20];
	int arr2[10];
	double k;
};
main()
{
	struct f h={10,"asddff",{1,2,3,4,5,6,7,8,9,0},3.14};
	printf("%d\n",h.e);
	printf("%s\n",h.arr1);
	printf("%d\n",h.arr2);
	printf("%lf\n",h.k);
}
#include<stdio.h>
typedef struct d
{
	int a;
	char ch[20];
	int q;
	char ch2[20];
}str;
main()
{
	str b={20,"张三",123456789,"农村户口"};
	printf("%d\n",b.a);
	printf("%s\n",b.ch);
	printf("%d\n",b.q);
	printf("%s\n",b.ch2);
}
#include<stdio.h>
typedef struct f
{
	char ch1[20];
	int w;
	char ch2[20];
}fr;
typedef struct d
{
	char ch1[20];
	int k;
	fr e;
}du;
main()
{
	du h={"张三",20,{"李四",25,"城市人"}};
	printf("%s\n",h.ch1);
	printf("%d\n",h.k);
	printf("%s\n",h.e.ch1);
	printf("%d\n",h.e.w);
	printf("%s\n",h.e.ch2);
}
#include<stdio.h>
typedef struct f
{
	char ch1[20];
	int i;
	char ch2[20];
}fr;
void print1(fr u)
{
	printf("%s\n",u.ch1);
	printf("%d\n",u.i);
	printf("%s\n",u.ch2);
}
void print2(fr* p)
{
	printf("%s\n",p->ch1);
	printf("%d\n",p->i);
	printf("%s\n",p->ch2);
}
main()
{
	fr h={"张三",20,"农村人口"}; 
	print1(h);
	print2(&h);
}
#include<stdio.h>
void print(int* arr,int sz)
{
	for(int i=0;i<sz;i++)
	{
		printf("arr[%d]=%d\n",i,*arr);
		arr++;
	}
	printf("\n");
}
void everse(int* arr,int sz)
{
	int t;
	int q=sz/2;
	for(int i=0;i<q;i++)
	{
		t=*arr;
		*arr=*(arr+sz-1);
		*(arr+sz-1)=t;
		arr++;
		sz=sz-2;
	}
}
main()
{
	int sz;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz); 
	everse(arr,sz);
	print(arr,sz);
}
#include<stdio.h>
void print(int arr[],int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("\n");
}
void everse(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	int t;
	while(left<right)
	{
		t=arr[left];
		arr[left]=arr[right];
		arr[right]=t;
		left++;
		right--;
	}
}
main()
{
	int sz;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz);
	everse(arr,sz);
	print(arr,sz);
}
#include<stdio.h>
void print1(int arr1[],int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		printf("arr1[%d]=%d\n",i,arr1[i]);
	}
	printf("\n");
}
void print2(int arr2[],int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		printf("arr2[%d]=%d\n",i,arr2[i]);
	}
	printf("\n");
}
void hw(int arr1[],int arr2[],int sz)
{
	int t;
	int i;
	for(i=0;i<sz;i++)
	{
		t=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=t;
	}
}
main()
{
	int sz;
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	sz=sizeof(arr1)/sizeof(arr1[0]);
	print1(arr1,sz);
	print2(arr2,sz);
	hw(arr1,arr2,sz);
	print1(arr1,sz);
	print2(arr2,sz);
}
#include<stdio.h>
main()
{
	unsigned int a;
	//10000000000000000000000000000001
	//11111111111111111111111111111110
	//11111111111111111111111111111111
	int c=0;
	scanf("%d",&a);
	while(a)
	{
		if(a%2==1)
		c++;
		a=a/2;
	}
	printf("有%d个1",c);
}
#include<stdio.h>
main()
{
	int a;
	int c=0;
	scanf("%d",&a);
	//00000000000000011111111111111111
	//00000000000000000000000000000001
	//00000000000000000000000000000001
	for(int i=0;i<32;i++)
	{
		if(a&1==1)
		c++;
		a=a>>1;
	}
	printf("有%d个1",c);
}
#include<stdio.h>
main()
{
	int a;
	int c=0;
	scanf("%d",&a);
	//1101
	//1100
	//1100
	//1011
	//1000
	while(a)
	{
		a&(a-1);
		c++;
		a=a&(a-1);
	}
	printf("有%d个1",c);
}
#include<stdio.h>
int test_a(int m,int n)
{
	int p;
	int c=0;
	p=m^n;
	for(int i;i<32;i++)
	{
		if((p&1)==1)
		c++;
		p=p>>1;
	}
	return c;
}
main()
{
	int m,a,n;
	int g;
	scanf("%d%d",&m,&n);
	g=test_a(m,n);
	printf("不同的位数有%d个",g);
}
//00000000000000000000000000000110
//00000000000000000000000000011101 







#include<stdio.h>
void print(int c)
{
	printf("%",c);
}
main()
{
	int n;
	scanf("%d",&n);
	print(n);
}
#include<stdio.h>
main()
{
	int a=6;
	int b=3;
	printf("%d\n",a);
	printf("%d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\n",a);
	printf("%d\n",b);
}
#include<stdio.h>
void print(int* arr,int sz)
{
	for(int i=0;i<sz;i++)
	{
		printf("arr[%d]=%d\n",i,*arr);
		arr++;
	}
}
main()
{
	int sz;
	int arr[5]={1,2,3,4,5};
	sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz);
}
#include<stdio.h>
main()
{
	int i,j,p;
	scanf("%d",&p);
	for(j=1;j<p+1;j++)
	{
		for(i=1;i<p+1;i++)
		{
			printf("%d*%d=%d\n",j,i,j*i);
		}
		printf("\n");
	}
}
#include<stdio.h>
void print(int n)
{
	if(n>0)
	{
		print(n/10);
		printf("%d\t",n%10);
	}
}
main()
{
	int a;
	scanf("%d",&a);
	print(a);
} 
#include<stdio.h>
int jc(int a)
{
	if(a==1)
	return 1;
	else
	return a*jc(a-1);
}
main()
{
	int a,y;
	scanf("%d",&a);
	y=jc(a);
	printf("%d",y);
}
#include<stdio.h>
main()
{
	int n,i,c=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=c*(n-i);
	}
	printf("%d",c);
}
#include<stdio.h>
int t_strlen(char* ch)
{
	char* fr=ch;
	char* end=ch;
	while(1)
	{
		if(*end!='\0')
		end++;	
		else
		break;
	}
	return end-fr;	
}
main()
{
	char ch[]="asdfghjklasdasd";
	int len=t_strlen(ch);
	printf("%d",len);
}
#include<stdio.h>
int xl(char* ch)
{
	if(*ch=='\0')
	return 0;
	else
	return 1+xl(ch+1);
}
main()
{
	int len;
	char ch[]="asdfghjkl";
	len=xl(ch);
	printf("%d",len);
}
#include<stdio.h>
void fx(char* string)
{
	char* fr=string;
	char* end=string;
	while(1)
	{
		if(*end!='\0')
		end++;
		else
		break;
	}
	char* p=end-1;
	char t;
	for(int i=0;i<=(end-fr)/2;i++)
	{
		t=*fr;
		*fr=*p;
		*p=t;
		p--;
		fr++;
	}
}
main()
{
	char ch[]="asdfghjkl";
	printf("%s\n",ch);
	fx(ch);
	printf("%s\n",ch);
}






#include<stdio.h>
void fx(char* string)
{
	
}
main()
{
	char ch[]="asdfghjkl";
	printf("%s",ch);
	fx(ch);
	printf("%s",ch);
}
#include<stdio.h>
int jf(int a)
{
	int e;
	if(a<10)
	return a;
	else
	e=a%10;
	return e+jf(a/10);
}
main()
{
	int a,c;
	scanf("%d",&a);
	c=jf(a);
	printf("%d",c);
}
#include<stdio.h>
int t_fb(int n)
{
	if(n<3)
	return 1;
	else
	return t_fb(n-1)+t_fb(n-2);
}
main()
{
	int n;
	scanf("%d",&n);
	int y=t_fb(n);
	printf("%d",y);
}
#include<stdio.h>
int t_f(int n)
{
	int a=1,b=1,c;
	if(n<3)
	return 1;
	else
	for(int i=0;i<n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
main()
{
	int n,y;
	scanf("%d",&n);
	y=t_f(n);
	printf("%d",y);
}

#include<stdio.h>
void print(int a)
{
	int i;
	for(i=31;i>0;i-=2)
	{
		if((a>>i)&1==1)
		printf("%d",1);
		else
		printf("%d",0);
	}
	printf("\n");
	for(i=30;i>=0;i-=2)
	{
		if((a>>i)&1==1)
		printf("%d",1);
		else
		printf("%d",0);
	}
}
main()
{
	int a;
	scanf("%d",&a);
	//0  0  000000000000000000000000000001010101001
	//32
	//110                                          1
	print(a);
}
#include<stdio.h>
int t_cf(int a,int n)
{
	if(n==0)
	return 1;
	else
	return a*t_cf(a,n-1);
}
int t_fx(int a,int n)
{
	int e;
	if(a<10)
	return t_cf(a,n);
	else
	e=a%10;
	return t_cf(e,n)+t_fx(a/10,n);
}
main()
{
	int a;
	int b;
	scanf("%d",&a);
	int n=0;
	b=a;
	while(b)
	{
		b=b/10;
		n++;
	}
	int y=t_fx(a,n);
	printf("%d",y);
}
/*
#include<stdio.h>
main()
{
	int a=6;
	for(int i=0;i<32;i++)
	{
		if(a&1==1)
		printf("%d",1);
		else
		printf("%d",0);
		a=a>>1;
	}
}
//00000000000000000000000000000110
//00000000000000000000000000000001

#include<stdio.h>
double t_fx(int n,int k)
{
	if(k==0)
	return 1;
	else if(k>0)
	return n*t_fx(n,k-1);
	else
	return 1.0/(n*t_fx(n,-k-1));	
}
main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	double y=t_fx(n,k);
	printf("%lf",y); 
}
#include<stdio.h>
main()
{
	int a=30;
	//00000000000000000000000000011110
	//00 00 00 1e
	char* p=(char*)&a;
	if(*p==0)
	printf("大端存储");
	else
	printf("小端存储"); 
}
#include<stdio.h>
int test_len(char* ch)
{
	if(*ch=='\0')
	return 0;
	else
	return 1+test_len(ch+1);
}
main()
{
	char ch[]="asdfghjklo";
	int len=test_len(ch);
	printf("%d",len);
}
#include<stdio.h>
main()
{
	char c=0;
	scanf("%d",&c);//110000000
	printf("%d",c);
 }
#include<stdio.h>
main()
{
	char c=0;
	scanf("%d",&c);
	printf("%u",c);
	//11111111111111111111111110000000
 }
#include<stdio.h>
main()
{
	char a=-1;         //11111111111111111111111111111111
	signed char b=-1;  //11111111111111111111111111111111
	unsigned char c=-1;//00000000000000000000000011111111
	printf("a=%d b=%d c=%d",a,b,c);//11111111/255
}
#include<stdio.h>
main()
{
	char c=128;
	//00000000000000000000000010000000
	//11111111111111111111111110000000
	//11111111111111111111111100101000
	printf("%u",c);
}
#include<stdio.h>
main()
{
	 char c=129;
	printf("%d",c);
}
#include<stdio.h>
main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int* p=arr;
	printf("%d",p[2]);
 }
#include<stdio.h>
main()
{
	int a=6,b=3,c=5;
	int*arr[3]={&a,&b,&c};
	for(int i=0;i<3;i++)
	{
		printf("%d ",*arr[i]);
	}
	
}
#include<stdio.h>
main()
{
	char*p="asdfghjkl";
	printf("%c",p[5]);
}
#include<stdio.h>
main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,5,6};
	int arr3[]={3,4,5,6,7};
	int*pr[3]={arr1,arr2,arr3};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",*(pr[i]+j));
		}
		printf("\n");
	}
}
#include<stdio.h>
main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int(*p)[10]=&arr;
	for(int i=0;i<10;i++)
	{
		printf("%d ",(*p)[i]);
	}
}
#include<stdio.h>
main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int(*p)[10]=&arr;
	for(int i=0;i<10;i++)
	{
		//printf("%d ",(*p)[i]);
		printf("%d ",*((*p)+i));
	}
}
#include<stdio.h>
main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	int(*p)[5]=arr;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			//printf("%d ",(*(p+i))[j]);
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
#include<stdio.h>
void print(int(*p)[5],int x,int y)
{
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}

main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print(arr,3,5);
}
#include<stdio.h>
void print(int arr[3][5],int x,int y)
{
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print(arr,3,5);
}
#include<stdio.h>
void Add(int x,int y)
{
	int z;
	z=x+y;
	printf("%d",z);
}
main()
{
	int a=3;
	int b=6;
	//Add(a,b);
	void(*p)(int,int)=Add;
	(*p)(a,b);
}
#include<stdio.h> 
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int jia(int x,int y)
{
	return x+y;
}
int jian(int x,int y)
{
	return x-y;
}
int cheng(int x,int y)
{
	return x*y;
}
int chu(int x,int y)
{
	return x/y;
}
main()
{
	int(*arr[5])(int,int)={0,jia,jian,cheng,chu};
	char ch[20];
	int p=3; 
	for(int i=0;i<3;i++)
	{
		int j=1;
		printf("请输入密码\n");
		scanf("%s",&ch);
		if((strcmp(ch,"qwe123456")==0))
		{
			printf("身份确认成功！欢迎使用\n"); 
			do
			{
				int x=0,y=0;
				printf("\n");
				printf("请选择运算的类型或是退出>\n");
				printf("*********************************\n"); 
				printf("********1.加法      2.减法*******\n"); 
				printf("********3.乘法      4.除法*******\n"); 
				printf("************  0.退出 ************\n");
				scanf("%d",&j);
				if(j>=1&&j<=4)
				{
					printf("选择成功\n"); 
					printf("请输入两个整数\n");
					scanf("%d%d",&x,&y);
					printf("%d\n",arr[j](x,y));	
				}
				else if(j==0)
				{
					printf("已退出\n"); 
					break;
				}
				else 
				printf("输入错误，请重新输入\n");
				Sleep(2000);
				system("cls");
			}while(1);
			
	 	} 
	 	else
	 	{
	 		p--;
	 		if(p!=0)
			printf("密码错误！请重新输入。\n");
	 		if(p!=0)
	 		printf("您现在还有%d次机会\n",p);
	 		if(p==0)
	 		{
	 			printf("输入错误次数过多，已自动退出！\n"); 
				break;
			}
		}
		if(j==0)
		break; 	 
	}
	printf("欢迎下次使用\n");
	Sleep(1000);	  
}
#include<stdio.h>
main()
{
	int a=6;
	printf("%d",a);
}
#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
main()
{
	int a=9,b=8;
	int t,r;
	r=Add(a,b);
	printf("%d\n",r);
	int(*p)(int,int)=Add;
	t=p(a,b);
	printf("%d",t);
 }
#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
 int Div(int x,int y)
{
	return x/y;
 } 
main()
{
	int(*arr[5])(int,int)={Add,Div};
	int a=9,b=3;
	int i=arr[0](a,b);
	printf("%d\n",i);
	int q=arr[1](a,b);
	printf("%d\n",q);
}
#include<stdio.h>
int jia(int x,int y)
{
	return x+y;
}
int jian(int x,int y)
{
	return x-y;
}
int cheng(int x,int y)
{
	return x*y;
}
int chu(int x,int y)
{
	return x/y;
}
int t_hd (int(*p)(int,int))
{
	int a=6,b=9;
	printf("%d",p(a,b));
}
main()
{
	int y;
	scanf("%d",&y);
	switch(y)
	{
	case 1:
		t_hd(jia);
	break;		
	case 2:
			t_hd(jian);
	break;		
	case 3:
			t_hd(cheng);
	break;		
	case 4:
			t_hd(chu);
	break;		
	}
}
#include<stdio.h>
#include<stdlib.h>
int t_gz(const void*e1,const void*e2)
{
	return((int*)e1-(int*)e2);
}
main()
{
	int arr[10]={10,9,8,7,6,5,4,3,2,1};
	qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),t_gz);
	for(int i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}	
}
#include<stdio.h>
main()
{
	int a=6;
	void*p=&a;
	printf("%p\n",p);
	*(int*)p=7;
	printf("%d\n",a);
}
#include<stdio.h>
void px(int arr[],int sz)
{
	for(int i=0;i<sz-1;i++)
		for(int j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}		
}
main()
{
	int arr[9]={9,7,8,6,5,4,3,2,1};
	for(int i=0;i<9;i++)
	printf("%d\t",arr[i]);
	printf("\n");
	int sz=sizeof(arr)/sizeof(arr[0]);
	px(arr,sz);
	for(int i=0;i<9;i++)
	printf("%d\t",arr[i]);
}
//12.2 
//没有解决的问题 
#include<stdio.h>
//void t_qsort(void* start,int an,int w,int (*p)(const void*e1,const void*e2))
void t_qsort(void* start,int an,int w,int (*p)(void*e1,void*e2))
{
	for(int i;i<an-1;i++)
		for(int j=0;j<an-1-i;j++)
		{
			//(char*)start;
			if((p((char*)start+j*w,(char*)start+w+j*w))>0)
			for(int h=0;h<w;h++)
			{
				char* fr=(char*)start+j*w;
			//	char*tw=(char*)start+w+j*w;
				char* tw=(char*)start+(j+1)*w;
				char t=*fr;
				*fr=*tw;
				*tw=t;
				fr++;
				tw++;
			}
		}
}
//int t_fz(const void*e1,const void*e2)
int t_fz(void*e1,void*e2)
{
	return*(int*)e1-*(int*)e2;
}
void print(int arr[])
{
	for(int i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
main()
{
	int arr[6]={6,5,2,3,1,4};
	print(arr);
	t_qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),t_fz);
	print(arr);
}

//qsort函数实现成功 
/*
#include<stdio.h>
void sw(char* b1,char*b2,int w)
{
	int i=0;
	for(i=0;i<w;i++)
	{
		char t=*b1;
		*b1=*b2;
		*b2=t;
		b1++;
		b2++;
	}
 }
void bu(void*ba,int sz,int w,int(*cm)(void*e1,void*e2))
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(cm((char*)ba+j*w,(char*)ba+(j+1)*w)>0)
			{
				sw((char*)ba+j*w,(char*)ba+(j+1)*w,w);
			}
		}
	}
 } 
int cm(void*e1,void*e2)
{
	return*(int*)e1-*(int*)e2;
}
main()
{
	int arr[6]={6,4,3,5,1,2};
	bu(arr,6,4,cm);
	for(int d=0;d<6;d++)
	{
		printf("%d\t",arr[d]);
	}
}
#include<stdio.h>
main()
{
	int a[]={1,2,3,4};//a[4]={1,2,3,4}
	printf("%d\n",sizeof(a));//16
	printf("%d\n",sizeof(a+0));//16错         8
	printf("%d\n",sizeof(*a));//4
	printf("%d\n",sizeof(a+1));//8
	printf("%d\n",sizeof(a[1]));//4
	printf("%d\n",sizeof(&a));//8
	printf("%d\n",sizeof(*&a));//16
	printf("%d\n",sizeof(&a+1));//8
	printf("%d\n",sizeof(&a[0]));//8
	printf("%d\n",sizeof(&a[0]+1));	//8
 }
#include<stdio.h> 
main()
{
	char arr[]={'a','b','c','d','e','f'};//char arr[6];
	printf("%d\n",sizeof(arr));          //7错    6    这不是字符串没有"\0" 
	printf("%d\n",sizeof(arr+0));        //8
	printf("%d\n",sizeof(*arr));         //1
	printf("%d\n",sizeof(arr[1]));       //1
	printf("%d\n",sizeof(&arr));         //8
	printf("%d\n",sizeof(&arr+1));       //8
	printf("%d\n",sizeof(&arr[0]+1));    //8
}
#include<stdio.h>
#include<string.h>
main()
{
	char arr[]={'a','b','c','d','e','f'};//arr[6]
	printf("%d\n",strlen(arr));          //&     和下一行的数相等 
	printf("%d\n",strlen(arr+0));        //&       
//	printf("%d\n",strlen(*arr));         //err    
//	printf("%d\n",strlen(arr[1]));       //err  
	printf("%d\n",strlen(&arr));         //&   和下一行的数相差6 
	printf("%d\n",strlen(&arr+1));       //&   
	printf("%d\n",strlen(&arr[0]+1));    //&    与第一行相差1 
}
#include<stdio.h>
main()
{
	char arr[]="abcdef";             //arr[7]
	printf("%d\n",sizeof(arr));      //7
	printf("%d\n",sizeof(arr+0));    //8
	printf("%d\n",sizeof(*arr));     //1
	printf("%d\n",sizeof(arr[1]));   //1
	printf("%d\n",sizeof(&arr));     //8 
	printf("%d\n",sizeof(&arr+1));   //8
	printf("%d\n",sizeof(&arr[0]+1));//8  
}
#include<stdio.h>
#include<string.h>
main()
{
	char arr[]="abcdef";   
	printf("%d\n",strlen(arr));//6
	printf("%d\n",strlen(arr+0));//6
//	printf("%d\n",strlen(*arr));//err
//	printf("%d\n",strlen(arr[1]));//err
	printf("%d\n",strlen(&arr));//6
	printf("%d\n",strlen(&arr+1));//&
	printf("%d\n",strlen(&arr[0]+1));//5
}
#include<stdio.h>
main()
{
	char* p="abcdef";
	printf("%d\n",sizeof(p));//8
	printf("%d\n",sizeof(p+1));//8
	printf("%d\n",sizeof(*p));//1
	printf("%d\n",sizeof(p[0]));//1
	printf("%d\n",sizeof(&p));//8
	printf("%d\n",sizeof(&p+1));//8
	printf("%d\n",sizeof(&p[0]+1));//8
 } 
#include<stdio.h>
#include<string.h>
main()
{
	char* p="abcdef";
	printf("%d",strlen(p));//6
	printf("%d",strlen(p+1));//5
	//printf("%d",strlen(*p));//err
	//printf("%d",strlen(p[0]));//err
	//printf("%d",strlen(&p));//&
	//printf("%d",strlen(&p+1));//&
	printf("%d",strlen(&p[0]+1));//5
}
//这个真的有点难，看怎么理解了 
#include<stdio.h>
main()
{
	int a[3][4]={0};
	printf("%d\n",sizeof(a));//48
	printf("%d\n",sizeof(a[0][0]));//4
	printf("%d\n",sizeof(a[0]));//16
	printf("%d\n",sizeof(a[0]+1));//8
	printf("%d\n",sizeof(*(a[0]+1)));//4
	printf("%d\n",sizeof(a+1));//8
	printf("%d\n",sizeof(*(a+1)));//16
	printf("%d\n",sizeof(&a[0]+1));//8
	printf("%d\n",sizeof(*(&a[0]+1)));//16
	printf("%d\n",sizeof(*a));//16
	printf("%d\n",sizeof(a[3]));//16
}
#include<stdio.h>
#include<stdlib.h>
struct str
{
	int a;
	char ch[20];
};
int er(const void*e1,const void*e2)
{
	return ((struct str*)e1)->a-((struct str*)e2)->a;
}
main()
{
	struct str b[3]{{23,"pk"},{18,"nb"},{20,"jk"}};
	qsort(b,3,sizeof(b[0]),er);
	for(int i=0;i<3;i++)
	{
		printf("%s",b[i].ch);
		printf("%d",b[i].a);
		printf("\n");
	}
 }
#include<stdio.h>
#include<stdlib.h>
typedef struct str
{
	int a;
	char ch[20];
}tt;
int er(const void*e1,const void*e2)
{
	//return ((struct str*)e1)->a-((struct str*)e2)->a;
	return ((tt*)e1)->a-((tt*)e2)->a;
}
main()
{
	tt b[3]{{23,"pk"},{18,"nb"},{20,"jk"}};
	qsort(b,sizeof(b)/sizeof(b[0]),sizeof(b[0]),er);
	for(int i=0;i<3;i++)
	{
		printf("%s",b[i].ch);
		printf("%d",b[i].a);
		printf("\n");
	}
 } 
#include<stdio.h>
#include<string.h> 
int main()
{
	char ch[20]={};
 	int p=3;
 	printf("你只有三次机会\n");
	for(int i=0;i<3;i++)
	{
		printf("请输入你的密码\n"); 
		scanf("%s",ch);
		if(strcmp(ch,"qqqwwweee")==0)
			{
				printf("密码正确\n");
				printf("身份验证成功\n");
				printf("现在你可以按'0'键退出\n");
				char y;
				getchar();
				scanf("%c",&y);
				if(y=='0')
				{
					printf("恭喜您已安全退出\n"); 
					break;
				}
			}
		else if(p==0)
			break;	
		else
			--p;
			printf("密码错误，你还有%d次机会\n",p);	
	 } 
	 printf("欢迎下次使用\n"); 
	return 0;
}
#include<stdio.h>
#include<string.h>
void nx(char ch[])
{
	int len=strlen(ch);
	int y=len/2;
	int left=0,right=len-1;
	for(int i=0;i<y;i++)
	{
		int t;
		t=ch[left];
		ch[left]=ch[right];
		ch[right]=t;
		left++;
		right--;
	}
}
int main()
{
	char ch[256];
	scanf("%s",ch);
	nx(ch);
	printf("%s",ch);
	return 0;
}
#include<stdio.h>
#include<string.h>
void nx(char* p)
{
	int len=strlen(p);
	char* left=p;
	char* right=p+len-1;
	while(left<right)
	{
		char t;
		t=*left;
		*left=*right;
		*right=t;
		left++;
		right--;
	}
}
int main()
{
	char ch[256];
	gets(ch);
	nx(ch);
	printf("%s",ch); 
	return 0;
}
#include<stdio.h>
int main()
{
	int a,n;
	int sum=0;
	int y=0;
	scanf("%d%d",&a,&n);
	for(int i=0;i<n;i++)
	{
		y=y*10+2;
		sum+=y;
	}
	printf("%d",sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int y=0,sum=0;
	for(int i=1;i<6;i++)
	{
		y=y*10+i;
		sum+=y;
	}
	printf("%d",sum);
	return 0;
}
//自幂数； 
#include<stdio.h>
int qm(int a,int n)
{
	int sum=1;
	for(int i=0;i<n;i++)
	{
		sum*=a;
	}
	return sum;
}
int ws(int i)
{
	int c=0;
	while(i>0)
	{
		i=i/10;
		c++;
	}
	return c;
}
int qh(int i,int y)
{
	int sum=0;
	for(int j=0;j<y;j++)
	{
		int q=i%10;
		sum+=qm(q,y);
		i=i/10;
	}
	return sum;
}
int main()
{
	for(int i=0;i<=100000;i++)
	{
		int y=ws(i); 
		int sum=qh(i,y);
		if(sum==i)
		{
			printf("%d\t",i);
		}
	}
}
//菱形打印；
#include<stdio.h>
int main()
{
	char ch[13][13]={};
	ch[0][6]='*';
		for(int i=0;i<13;i++)
		for(int j=0;j<13;j++)
		{
			if(ch[i][j]=='*')
			{
				ch[i+1][j-1]='*';
				ch[i+1][j+1]='*';
				ch[i+1][j]='*';
			}
		}
	ch[7][0]=' ';
	ch[7][12]=' ';
		for(int i=0;i<13;i++)
		for(int j=0;j<13;j++)
		{
			if(ch[i][j]==' ')
			{
				ch[i+1][j-1]=' ';
				ch[i+1][j+1]=' ';
				ch[i+1][j]=' ';
			}
		}	
		for(int i=0;i<13;i++)
		{
		for(int j=0;j<13;j++)
		{
			printf("%c",ch[i][j]);
		}
		printf("\n");
		}	
	return 0;
 } 
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			printf("%c",' ');
		}
		for(int j=0;j<2*i+1;j++)
		{
			printf("*"); 
		}	
		printf("\n");
	 } 
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf(" ");
		}
		for(int j=0;j<n*2-1-2-2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
 }
#include<stdio.h>
void print(int a[])
{
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
void px(int a[],int sz)
{
	int l=0,r=sz-1;
	while(l<r)
	{
		while(l<r)
		{
			if(a[l]%2==1)
			l++;
			else break; 
		}
		while(l<r)
		{
			if(a[r]%2==0)
			r--;
			else break;
		}
		int t;
		t=a[l];
		a[l]=a[r];
		a[r]=t;
	}
	
}
int main()
{
	int a[100];
	//int n;
	//scanf("%d",&n);
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int sz=10;
	px(a,sz);
	print(a); 
	return 0;
 }
#include<stdio.h> 
int main()
{
	char k;
	for(k='a';k<='d';k++)
	{
		if((k!='a')+(k=='c')+(k=='d')+(k!='d')==3)
		printf("%c",k);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	for(a=1;a<6;a++)
		for(b=1;b<6;b++)
			for(c=1;c<6;c++)
				for(d=1;d<6;d++)
					for(e=1;e<6;e++)
					{
						if(((b==2)+(a==3)==1)&&
						  ((b==2)+(e==4)==1)&&
						  ((c==1)+(d==2)==1)&&
						  ((c==5)+(d==3)==1)&&
						  ((e==4)+(a==1)==1))
							{
								if(a*b*c*d*e==1*2*3*4*5)
								printf("a=%d ,b=%d ,c=%d ,d=%d ,e=%d \n",a,b,c,d,e);
							}
					}
		return 0;
 } */ 
//#include<stdio.h> 
//int div(int x, int y)
//{
//	return x - y;
//}
//int sum(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 5, b = 6;
//	int (*cr[2])(int, int) = { sum,div };
//	int j = cr[0](a, b);
//	int k = cr[1](a, b);
//	printf("%d", j);
//	printf("%d", k);
//	return 0;
//}
//strcpy实现 
//char* t_strcpy(char*p1,const char*p2)
//{
//	char*q=p1;
//	while(*p1++=*p2++) ;
//	return q;
//}
//int main()
//{
//	char ch1[]="asdfgh";
//	char ch2[]="abcd";
//	t_strcpy(ch1,ch2);
//	printf("%s",ch1); 
//	return 0;
//}
//strcmp函数 
//int main()
//{
//	char ch1[]="qwerty";
//	char ch2[]="wabcde";
//	int ret=strcmp(ch1,ch2);
//	if(ret>0)
//	printf("1d");
//	else
//	printf("2d");
//	return 0;
//}
//strcmp实现
//int t_strcmp(char*p1,char*p2)
//{
//	while(*p1==*p2)
//	{
//		if(*p1==0)
//		return 0;
//		p1++;
//		p2++;
//	}
//	return *p1-*p2;
//}
//int main()
//{
//	char ch1[]="qwerty";
//	char ch2[]="qwezty";
//	int ret=t_strcmp(ch1,ch2);
//	if(ret>0)
//	printf("1d");
//	else
//	printf("2d");
//	return 0;
// } 
//#include<stdio.h>
//void px(int arr[],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=0;j<n-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int y=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=y;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	int arr[10]={0};
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	px(arr,n);
//	for(int i=0;i<n;i++)
//	{
//			printf("%d ",arr[i]);
//	}	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[10]={0};
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%x",&arr[i]);
//	}
//	
//	for(int i=0;i<n;i++)
//	{
//		printf("%o\n",arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[10]="";
//	int b[10]={1,2,3,4,5,8,9,6,5,2};
//	//memcpy(b,a,sizeof(a));
//	//memmove(b,a,5*sizeof(a[1]));
//	memset(a,'#',10);
//	//int ret=memcmp(a,b,10*sizeof(a[0]));
//	for(int i=0;i<10;i++)
//	{
//		printf("%c ",a[i]);
//	}
//	printf("%s",a);
//	//printf("%d",ret);
//	return 0;
// } 
//#include<stdio.h>
//#define PI =3.1415926535879323
//int main()
//{
//	double sum,r;
//	scanf("%lf",&r);
//	sum=PI*r*r;
//	printf("%0.7lf",sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[35][200]={0};
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		a[i][0]=1;
//	}
//	for(int i=1;i<n;i++)
//	{
//		for(int j=1;j<i+1;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<i+1;j++)
//		{
//			printf("%d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int cz(int a[],int n,int y)
//{
//	int cont=1;
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]==y)
//		{
//			return cont;
//		}
//		cont++;
//	}
//}
//int main()
//{
//	int n,y;
//	int a[1000]={0};
//	scanf("%d",&n);
//			for(int i=0;i<n;i++)
//			{
//				scanf("%d",a[i]);
//			}
//	scanf("%d",&y);
//	int ret=cz(a,n,y);
//	printf("%d",ret);
//	return 0;
//}

//int main()
//{
//	char ch[10]="0000000";
//	ch[0]='1';
//	printf("%s\n",ch);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch[10]="00000";
//	printf("%s\n",ch);
//	for(int i=0;i<5;i++)
//	{
//		ch[0]='1';
//		printf("%s\n",ch);
//		for(int j=0;j<4-i;j++)
//		{
//			char tmp=ch[j+1];
//					ch[j+1]=ch[j];
//					ch[j]=tmp;
//					printf("%s\n",ch);
//		}
//	
//	}
//	return 0;
//}
//#include<stdio.h>
//void MAX(int a[],int n,int *px,int *pn,int *ps)
//{
//	for(int j=0;j<n-1;j++)
//	{
//		for(int i=0;i<n-1-j;i++)
//		{
//			if(a[i]>a[i+1])
//			{
//				int tmp=a[i];
//				a[i]=a[i+1];
//				a[i+1]=tmp;
//			}
//		}
//		
//	}
//			*px=a[n-1];
//			*pn=a[0];
//			int sum=0;
//			for(int i=0;i<n;i++)
//							 {
//								sum+=a[i]; 
//							 }
//			*ps=sum;				 
//}
//int main()
//{
//	int n;
//	int max,min,sum;
//	int a[10000]={0};
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	MAX(a,n,&max,&min,&sum);
//	printf("%d\n",max);
//	printf("%d\n",min);
//	printf("%d\n",sum);
//	return 0;
//}
//#include<stdio.h>
//int pd(int y)
//{
//	if(y%400==0||y%4==0&&y%100!=0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y=0;
//	scanf("%d",&y);
//	int ret=pd(y);
//	if(ret==1)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int y=0;
//	for(int i=1;i<10;i++)
//	{
//		for(int j=0;j<10;j++)
//		{
//			y=i*10000+i+j*1000+j*100;
//			printf("%d\n",y);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	printf("%x\n",n);
//	return 0;
//}
//int main()
//{
//	int a=3;
//	int *p=NULL;
//	printf("%d\n",a);
//	return 0;
// } 
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	scanf("%x",&n);
//	printf("%d",n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n=0,m=0;
//	int a[1000]={0};
//	scanf("%d%d",&n,&m);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int zz(int a[],int n,int m)
//{
//	int sum=0;
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=0;j<n-1-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				int t=a[j];
//				a[j]=a[j+1];
//				a[j+1]=t;
//			}
//		}
//	}
//	for(int i=0;i<m;i++)
//	{
//		sum+=a[n-1-i];
//	}
//	return sum;
//}
//int main()
//{
//	int n=0,m=0;
//	int a[1000]={0};
//	scanf("%d%d",&n,&m);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	int ret=zz(a,n,m);
//	printf("%d",ret);
//	return 0;
//}
//int main()
//{
//	int m=0,n=0;
//	int a[100]={0};
//	scanf("%d%d",&m,&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void move(int a[],int n)
//{
//	while(n-1)
//	{
//		int i=0; 
//		a[i]=a[i+1];
//		i++;
//	}
//}
//int men(int a[],int n)
//{
//	if(a[n-1]>a[0])
//		return a[n-1];
//	else 
//		return a[0];
//}
//int women(int a[],int n)
//{
//	if(a[n-1]>a[0])
//		return a[n-1];
//  else 
//		return a[0];
//	
//}
//int start(int a[],int n)
//{
//	int sum=0;
//	while(n)
//	{
//		int y=men(a,n);
//		if(y==a[0])
//		  move(a,n);
//		sum+=y;
//		n--;
//	  int x=women(a,n);
//		if(x==a[0])
//		  move(a,n);
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	int a[1000]={0};
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	int sum=start(a,n);
//	printf("%d",sum);
//	return 0;
//}
//#include<stdio.h>
//int my_strcmp(const char* p1,const char* p2)
//{
//	while(*p1==*p2)
//	{
//		if(!*p1)
//		return 0;
//		p1++;
//		p2++;
//	}
//	return *p1-*p2;
//	
//}
//int main()
//{
//	char s1[1000]={0};
//	char s2[1000]={0};
//	gets(s1);
//	gets(s2);
//	int ret=my_strcmp(s1,s2);
//	printf("%d",ret);
//	return 0;	
//}
//int main()
//{
//	char s1[1000]={0};
//	char s2[1000]={0};
//	//gets(s1);
//	//gets(s2);
//	//int ret=my_strcmp(s1,s2);
//	//printf("%d",ret);
//	//puts(s1);
//	//puts(s2);
//	char ch=getchar();
//	putchar(ch);
//	return 0;	
//}
//int main()
//{
//	int *p=(int *)malloc(10*sizeof(int));
//	if(p==NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	else
//	{
//		for(int i=0;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(int i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//		free(p);
//		p=NULL;
//	}
//	return 0;
// } 
// int main()
// {
// 	int *p=NULL;
// 	//printf("%d",p);
// 	if(!p)
// 	{
// 		printf("ok");
//	 }
// 	return 0;
// }
//int main()
//{
//	int *p=(int *)calloc(10,sizeof(int));
//	if(!p)
//	{
//		printf("%d",strerror(errno));
//	}
//	else
//	{
//		for(int i=0;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(int i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//		printf("\n");
////		free(p);
////		p=NULL;	
//		int *por=(int *)realloc(p,20*sizeof(int));
//		//int *por=(int *)realloc(p,20*INT_MAX);
//		if(por==NULL)
//		{
//			printf("%s",strerror(errno));
//		}
//		else
//		{
//			p=por;
//			for(int i=10;i<20;i++)
//			{
//				*(p+i)=i;
//			}
//			for(int i=0;i<20;i++)
//			{
//				printf("%d ",*(p+i));
//			}
//			free(p);
//			p=NULL;
//		}
//	}
//	return 0;
//}
// int main()
// {
// 	int a=9;
// 	int *p=&a;
// 	int *k=NULL;
// 	assert(k);
// 	printf("pass");
// 	return 0;
// }
//int main()
//{
//	int a[2]={0};
//	int b=8;
//	int * const p=&a;
//	int *k=p;
//	//const int *p=a;
//	//*(p+1)=5;
//	printf("%d",a[1]);
//	return 0;
//}
// int main()
// {
// 	int a=9;
// 	int b=0;
// 	int *const p=&a;
// 	int *k=p;
// 	*k=3;
// 	printf("%d",a);
// 	return 0;
//  } 
// #include<stdio.h>
//void strtxt(char*p1,char ch,char*p2)
//{
//	while(*p1)
//	{
//		if(*p1==ch)
//		{
//			p1++;
//		}
//		*p2=*p1;
//		p1++;
//		p2++;
//	}
//}
//int main()
//{
//	char str[21]="0";
//	char str2[21]="0";
//	gets(str);
//	char ch=getchar();
//	strtxt(str,ch,str2);
//	printf("%s",str2);
//	return 0;	
//}

// #include<stdio.h>
//void strtxt(const char*p1,char ch,char*p2)
//{
//	while(*p1)
//	{
//		if(*p1==ch)
//		{
//			p1++;
//		}
//		*p2=*p1;
//		p1++;
//		p2++;
//	}
//}
//int main()
//{
//	char str[21]="0";
//	char str2[21]="0";
//	gets(str);
//	char ch=getchar();
//	strtxt(str,ch,str2);
//	//printf("%s",str2);
//	puts(str2);
//	return 0;	
//}

//struct S
//{
//	int n;
//	int a[];
//};
//int main()
//{
//	//printf("%d ",sizeof(struct S));
//	struct S *p=NULL;
//	p=(struct S*)malloc(sizeof(struct S)+10*sizeof(int));	
//	p->n=6;
//	int  i=0;
//	for(i=0;i<10;i++)
//	{
//		p->a[i]=i;	
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",p->a[i]);
//	}
//	struct S *y=(struct S*)realloc(p,sizeof(struct S)+sizeof(int)*20);
//	if(y)
//	{
//		p=y;
//		for(int i=10;i<20;i++)
//		{
//			p->a[i]=i;
//		}
//		printf("\n");
//		for(int i=0;i<20;i++)
//		{
//			printf("%d ",p->a[i]);
//		}
//		free(p);
//		p=NULL;
//	}
//	else
//	printf("%s",strerror(errno));
//	return 0 ;
// } 

// struct S
// {
// 	int n;
// 	int*p;
// };
// int main()
// {
// 	struct S s;
// 	s.n=6;
//// 	printf("%d ",s.n);
//	int *y=(int *)malloc(10*sizeof(int));
//	if(y)
//	{
//		s.p=y;
//		for(int i=0;i<10;i++)
//		{
//			s.p[i]=i;
//		}
//		for(int i=0;i<10;i++)
//		{
//			printf("%d ",s.p[i]);
//		}
//		printf("\n");
//	}
//	else
//	printf("%s",strerror(errno));
//	int *t=(int *)realloc(s.p,sizeof(int)*20);
//	if(t)
//	{
//		s.p=t;
//		for(int i=10;i<20;i++)
//		{
//			s.p[i]=i;			
//		}
//		for(int i=0;i<20;i++)
//		{
//			printf("%d ",s.p[i]); 
//		}
//		printf("\n%d",s.n);
//		free(s.p);
//		s.p=NULL;
//	}
//	else
//	printf("%s",strerror(errno));
// 	return 0;
// }
// #include<stdio.h>
//int Max(int a[],int n)
//{
//	int tmp=0;
//	for(int i=0;i<n;i++)
//	{
//		if(tmp<a[i])
//		{
//			tmp=a[i];
//		}
//	}
//	return tmp;
//}
//int main()
//{
//	int n;
//	int a[1000]={0};
//	scanf("%d",&n);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);	
//	}
//	int y=Max(a,n);
//	printf("%d",y);
//	return 0;
//}
// 
//int main()
//{
//	printf("%7d",6);
//	return 0;
//}
// 
//#include<stdio.h>
//void pp(int a[],int n)
//{
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=0;j<n-1-i;j++)
//		{
//			if(a[j]>a[j=1])
//			{
//					int t=a[j];
//					a[j]=a[j+1];
//					a[j+1]=a[j];
//			}
//		}
//	}
//}
//int fx(int a[],int n,int m)
//{
//	int count=0;
//	int q=0;
//	int y=0;
//	int b[7]={0};
//	pp(a,n);
//	for(int i=0;i<n/m;i++)
//	{
//		if(n%2==0)
//		{
//			q=n-y*m;
//			if(q>=0)
//			{
//				for(int j=0;j<m;j++)
//			{
//				b[j]+=a[n-1-i];	
//			}
//			count++;
//			y++;
//			}
//			else
//			{
//				for(int j=0;j<m+q;j++)
//				{
//					b[j]+=a[n-1-i];	
//				}
//				break;
//			}
//			
//			
//		}
//		else
//		{
//			q=n-y*m;
//			if(q>=0)
//			{
//				for(int j=0;j<m;j++)
//				{
//					b[m-1-j]+=a[n-1-m*count]; 
//				}
//				y++;
//			}
//			else
//			{
//				for(int j=0;j<q+m;j++)
//				{
//					b[m-1-j]+=a[n-1-m*count];
//				}
//				break;
//			}
//			
//		}
//	}
//	pp(b,m);
//	return b[m-1]-b[0];
//}
//int main()
//{
//	int n=0,m=0;
//	int a[7];
//	scanf("%d%d",&n,&m);
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	int ret=fx(a,n,m);
//	printf("%d",ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long int n=0;
//	long long int sum=1;
//	long int k=0;
//	scanf("%d",&n);
//	long int m=n;
//	if(m<5)
//	{
//		printf("%d",m);
//		return 0;
//	}
//	while(m)
//	{
//		m-=3;
//		if(m<0)
//		{
//			break;	
//		}
//		k++; 
//	}
//	if(n%3==1)
//	{
//		for(int i=0;i<k-1;i++)
//		{
//			sum*=3;	
//		}
//		sum*=4;		
//	}
//	else if(n%3==2)
//	{
//		for(int i=0;i<k;i++)
//		{
//			sum*=3;	
//		}
//		sum*=2;
//	}
//	else
//	{
//		for(int i=0;i<k;i++)
//		{
//			sum*=3;	
//		}
//	}
//		printf("%d",sum%5218);
//	return 0;	
//}
//#define p 3
//int main()
//{
//	printf("%d",p);
//	return 0;
//	}	
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	int a[100]={0};
//	int y=0;
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	y=a[0]-a[1];
//	if(y<0)
//	{
//		y=-y;	
//	}
//	for(int i=0;i<n-2;i++)
//	{
//		int tmp=0;
//		tmp=a[i]-a[i+1];
//		if(tmp<0)
//		{
//			tmp=-tmp;	
//		}
//		if(tmp<y)
//		{
//			y=tmp;
//		}
//	}
//	printf("%d",y);
//	return 0;
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	int cot=0;
//	int p=1;
//	int y=1;
//	while(1)
//	{
//		p*=3;
//		if(n%p!=0)
//		{
//			y=p;
//			break;
//		}
//	}
//	while(n-=y)
//	{
//		if(n<0)
//		{
//			cot++;
//			break;
//		}
//		cot++;
//	}
//	printf("%d",cot);
//	return 0;
//}
// int mian()
// {
// 	int n=0,m=0;
// 	int a[1000]={0};
// 	scanf("%d%d",&n,&m);
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%d",&a[i]);
//	 }
// 	
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n-1-i;j++)
// 		{
// 			if(a[j]>a[j+1])
// 			{
// 				int tmp=a[j];
// 				a[j]=a[j+1];
// 				a[j+1]=tmp;
//			 }
//		 }
//	 }
//	 int*p=malloc(m*sizeof(int));
//	 if(!p)
//	 {
//	 	return 0;
//	 }
//	 else
//	 {
//	 	int p=n/m;
//	 	if(n%m!=0)
//	 	{
//	 		 p=p+1;
//		 }
//		for(int i=0;i<p;i++)
//		{
//			for(int j=0;j<m;j++)
//			{
//				*p=a[]
//			}
//		}
//	 }
// 	return 0;
//  } 
//int main()
//{
//	int a[2][2]={{1,2},{3,4}};
//	int b[1000]={0};
////	for(int i=0;i<sizeof(a))
//	printf("%d",sizeof(a));
//	return 0;
// } 
//#define row 100
//#define col 100
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	int a[row][col]={0};
//	for(int i=0;i<n;i++)
//	{
//		a[i][0]=1;
//	}
//	for(int i=1;i<n;i++)
//	{
//		for(int j=1;j<i;j++)
//		{
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<i+1;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	long long y=256*1024*1024/4;
//	printf("%ld",y);
//	return 0;
//}
////杨辉三角
//#define row 40
//#define col 200
//int main()
//{
//	int a[row][col]={0};
//	int n=0;
//	int i=0;
//	int j=0;
//	scanf("%d",&n);
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			if(j==0)
//			{
//				a[i][j]=1;
//			}
//			if(j==i)
//			{
//				a[i][j]=1;
//			}
//			else
//			{
//				a[i][j]=a[i-1][j-1]+a[i-1][j];
//			}
//		}
//	}
//	//for(i=0;i<row;i++)
////	{
////		for(j=0;j<i+1;j++)
////		{
////			printf("%d ",a[i][j]);
////		}	
////		printf("\n");
////	}
//	int k=(1+40)*40/2;
//	int count=1;
//	for(i=0;i<k;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			if(n==a[i][j])
//			{
//				printf("%d",count);
//				return 0;
//			}
//			count++;
//		}
//	}
//	return 0;
//} 
//杨辉三角
//#define row 40
//#define col 200
//int main()
//{
//	int a[row][col]={0};
//	int n=0;
//	int i=0;
//	int j=0;
//	scanf("%d",&n);
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			if(j==0)
//			{
//				a[i][j]=1;
//			}
//			if(j==i)
//			{
//				a[i][j]=1;
//			}
//			else
//			{
//				a[i][j]=a[i-1][j-1]+a[i-1][j];
//			}
//		}
//	}
//	//for(i=0;i<row;i++)
////	{
////		for(j=0;j<i+1;j++)
////		{
////			printf("%d ",a[i][j]);
////		}	
////		printf("\n");
////	}
////	int k=(1+40)*40/2;
//	int count=1;
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<i+1;j++)
//		{
//			if(n==a[i][j])
//			{
//				printf("%d",count);
//				return 0;
//			}
//			count++;
//		}
//	}
//	return 0;
//} 
// int main()
// {
// 	int a=1000000000;
// 	long long b=100000000000;
// 	long long c=100000000000ll;
// 	printf("%d  %lld  %lld",a,b,c);
// 	return 0;
// } 
 //int main()
//{
//	int n = 0;
//	int x = -1;
//	int y = -1;
//	int a[100][100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < 40; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (j == 0)
//			{
//				a[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				a[i][j] = 1;
//			}
//			else
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	/*for (int i = 0; i < 40; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}*/
//	for (int i = 0; i < 40; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (n < a[i][j])
//			{
//				break;
//			}
//			if (a[i][j] == n)
//			{
//				x = i;
//				y = j + 1;
//				break;
//			}
//		}
//		if (x != -1)
//		{
//			break;
//		}
//	}
//	if(x!=-1) 
//		printf("%d", (1 + x) * x / 2 + y);
//	return 0;
//}
 
//int main()
//{
//	int n = 0;//用于测评的数
//	int x = -1;//获取N的坐标
//	int y = -1;//这两处赋值为-1是为了在  标记点1  处好判断
//	int a[100][100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < 40; i++)
//	{      //给杨辉三角赋值
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (j == 0)
//			{
//				a[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				a[i][j] = 1;
//			}
//			else
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	/*for (int i = 0; i < 40; i++)
//	{    //测试杨辉三角中的值是否符合要求
//	    //实际中会被注释，不出现在程序中
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}*/
//	for (int i = 0; i < 40; i++)
//	{     //查找N所在位置所用的循环
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (n < a[i][j])
//			{
//				break;//根据递增规律判断此后再没有符合的数
//			}
//			if (a[i][j] == n)
//			{         //此处为找到N后保存他的位置坐标
//				x = i;
//				y = j + 1;
//				break;  //  标记点1
//			}
//		}
//		if (x != -1)
//		{  //因为  标记点1   处无法完全退出循环，所以此处再次退出
//			break;
//		}
//	}
//	if (x != -1)  //如果一直没有找到 N 那么x不会被改变，则不会输出
//		printf("%d", (1 + x) * x / 2 + y);  //用等差公式得到答案 
//	return 0;
//} 
//#include<stdio.h> 
//int main()
//{
//	int n = 0;//用于测评的数
//	int cot = 0;//用于计数
//	int a[100][100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < 40; i++)
//	{      //给杨辉三角赋值
//		for (int j = 0; j < i + 1; j++)
//		{
//			if (j == 0)
//			{
//				a[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				a[i][j] = 1;
//			}
//			else
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (int i = 0; i < 40; i++)
//	{    //查找N
//		for (int j = 0; j < i + 1; j++)
//		{
//			cot++;
//			if (n == a[i][j])
//			{  //如果找到直接输出，并结束程序
//				printf("%d", cot);
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
//int fn(int n)
//{
//	if(n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fn(n-1)+fn(n-2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int y=fn(n);
//	printf("%d",y);
//	return 0;
//} 
 //int main()
// {
// 	int a=1;
// 	int b=1;
// 	int c=0;
// 	int n=0;
// 	scanf("%d",&n);
// 	for(int i=3;i<=n;i++)
// 	{
// 		c=a+b;
// 		a=b;
// 		b=c;
// 	}
// 	printf("%d",c);
// 	return 0;
// }
 //int main()
// {
// 	int n=0,m=0;
// 	int a=0,b=0;
// 	scanf("%d%d",&n,&m);
// 	int arr[100001]={0};
// 	for(int i=0;i<=n;i++)
// 	{
// 		arr[i]=i;
// 	}
// 	while(~scanf("%d%d",&a,&b))
// 	{
// 		if(a==0)
// 		{	
// 			int i=2;
// 			for(i=2;i<=b;i++)
// 			{
//	 			if(arr[i-1]<arr[i])
//	 			{
//	 				break;
//	 			}
//	 	    }
//	 	    if(i>b)
//	 	    {
//	 	    	;
//	 	    }
//	 	    else
//	 	    {
//	 	    	for(i=0;i<b-1;i++)
//	 	    	{
//	 	    		for(int j=2;j<=b-i;j++)
//	 	    		{
//	 	    			if(arr[j-1]<arr[j])
//	 	    			{
//	 	    				int tmp=arr[j];
//	 	    				arr[j]=arr[j-1];
//	 	    				arr[j-1]=tmp;
//	 	    			}
//	 	    		}
//	 	    	}
//	 	    }
// 		}
// 		else
// 		{
// 			int i=n-b+2;
// 			for(i=n-b+2;i<=n;i++)
// 			{
//	 			if(arr[i-1]>arr[i])
//	 			{
//	 				break;
//	 			}
//	 	    }
//	 	    if(i>n)
//	 	    {
//	 	    	;
//	 	    }
//	 	    else
//	 	    {
//	 	    	for(i=0;i<b-1;i++)
//	 	    	{
//	 	    		for(int j=n-b+2;j<=n-i;j++)
//	 	    		{
//	 	    			if(arr[j-1]>arr[j])
//	 	    			{
//	 	    				int tmp=arr[j];
//	 	    				arr[j]=arr[j-1];
//	 	    				arr[j-1]=tmp;
//	 	    			}
//	 	    		}
//	 	    	}
//	 	    }
// 		}
// 	}
// 	for(int i=1;i<=n;i++)
// 	{
// 		printf("%d ",arr[i]);
// 	}
// 	return 0;
// }
 //#include<stdio.h>
// int main()
// {
// 	int n=0,m=0;
// 	int a=0,b=0;
// 	scanf("%d%d",&n,&m);
// 	int arr[100001]={0};
// 	for(int i=0;i<=n;i++)
// 	{
// 		arr[i]=i;
// 	}
// 	for(int p=0;p<m;p++)
// 	{
// 		scanf("%d%d",&a,&b);
// 		if(a==0)
// 		{	
// 			int i=2;
// 			for(i=2;i<=b;i++)
// 			{
//	 			if(arr[i-1]<arr[i])
//	 			{
//	 				break;
//	 			}
//	 	    }
//	 	    if(i>b)
//	 	    {
//	 	    	;
//	 	    }
//	 	    else
//	 	    {
//	 	    	for(i=0;i<b-1;i++)
//	 	    	{
//	 	    		for(int j=2;j<=b-i;j++)
//	 	    		{
//	 	    			if(arr[j-1]<arr[j])
//	 	    			{
//	 	    				int tmp=arr[j];
//	 	    				arr[j]=arr[j-1];
//	 	    				arr[j-1]=tmp;
//	 	    			}
//	 	    		}
//	 	    	}
//	 	    }
// 		}
// 		else
// 		{
// 			int i=n-b+2;
// 			for(i=n-b+2;i<=n;i++)
// 			{
//	 			if(arr[i-1]>arr[i])
//	 			{
//	 				break;
//	 			}
//	 	    }
//	 	    if(i>n)
//	 	    {
//	 	    	;
//	 	    }
//	 	    else
//	 	    {
//	 	    	for(i=0;i<b-1;i++)
//	 	    	{
//	 	    		for(int j=n-b+2;j<=n-i;j++)
//	 	    		{
//	 	    			if(arr[j-1]>arr[j])
//	 	    			{
//	 	    				int tmp=arr[j];
//	 	    				arr[j]=arr[j-1];
//	 	    				arr[j-1]=tmp;
//	 	    			}
//	 	    		}
//	 	    	}
//	 	    }
// 		}
// 	}
// 	for(int i=1;i<=n;i++)
// 	{
// 		printf("%d ",arr[i]);
// 	}
// 	return 0;
// }
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int k = 0;
//	char a[100000] = "0";
//	scanf("%d", &k);
//	scanf("%s", a);
//	int len = strlen(a);
//	if (len % k != 0)
//	{
//		printf("-1");
//		return 0;
//	}
//	else
//	{
//		int y = len / k;
//		char* p = a;
//		char* ps = p;
//		int sum = 0;
//		int d[100000] = { 0 };
//		for (int i = 0; i < y; i++)
//		{
//			int max = 0;
//			ps += i;
//			int n = 0;
//			for (int j = 0; j < k; j++)
//			{
//				d[n++] = *ps;
//				ps += y;
//			}
//			ps = p;
//			for (int m = 0; m < k; m++)
//			{
//				int cot = 0;
//				for (int f = 0; f < k; f++)
//				{
//					if (d[m] == d[f])
//					{
//						cot++;
//					}
//				}
//				if (max < cot)
//				{
//					max = cot;
//				}
//			}
//			int g = k - max;
//			sum += g;
//		}
//		printf("%d", sum);
//	}
//	return 0;
//}

//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	int a=n/60;
//	
//	return 0;
//} 
 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SListNode;

//查
SListNode* SListFind(SListNode* phead, SLTDataType x)
{
	if (!phead)
	{
	
	}
	else
	{
		while (phead != NULL)
		{
			
			if (phead->data == x)
			{
				return phead;
			}
			phead = phead->next;
		}
		return NULL;
	}
}

//增
void SListPushBack(SListNode** phead, SLTDataType x)
{
	if (*phead == NULL)
	{
		SListNode* tmp = (SListNode*)malloc(sizeof(SListNode));
		assert(tmp);
		tmp->data = x;
		tmp->next = NULL;
		*phead = tmp;
	}
	else
	{
		SListNode* ps = *phead;
		SListNode* tmp = (SListNode*)malloc(sizeof(SListNode));
		assert(tmp);
		tmp->data = x;
		tmp->next = NULL;
		while (ps->next != NULL)
		{
			ps = ps->next;
		}
		ps->next = tmp;
	}
}
void SListPushFront(SListNode** phead, SLTDataType x)
{
	if (*phead == NULL)
	{
		SListNode* tmp = (SListNode*)malloc(sizeof(SListNode));
		assert(tmp);
		tmp->data = x;
		tmp->next = NULL;
		*phead = tmp;
	}
	else
	{
		SListNode* ps = *phead;
		SListNode* tmp = (SListNode*)malloc(sizeof(SListNode));
		assert(tmp);
		tmp->data = x;
		tmp->next = ps;
		*phead = tmp;
	}
}
void SListInsert(SListNode** phead, SListNode* pos, SLTDataType x)
{
	if (pos == *phead)
	{
		SListPushFront(phead, x);
	}
	else
	{
		SListNode* p1 = *phead;
		while (p1->next != pos)
		{
			p1 = p1->next;
		}
		SListNode* tmp =(SListNode *)malloc(sizeof(SListNode));
		assert(tmp);
		tmp->data = x;
		tmp->next = pos;
		p1->next = tmp;
	}
	
}
//删

void SListFrontPop(SListNode** phead)
{
	if (*phead == NULL)
	{

	}
	else if ((*phead)->next == NULL)
	{
		SListNode* ps = *phead;
		*phead = NULL;
		free(ps);
	}
	else
	{
		SListNode* p1 = *phead;
		SListNode* p2 = p1->next;
		*phead =  p2;
		free(p1);
	}
}



void SListPopBack(SListNode** phead)
{
	if((*phead == NULL))
	{
		printf("没有可删的对象");
	}
	else if ((*phead)->data == NULL)
	{
		SListFrontPop(phead);
	}
	else
	{
	    SListNode* p1 = *phead;
		SListNode* p2 = *phead;
		while (p1->next->next != NULL)
		{
			p1 = p1->next;
		}
		p2 = p1->next;
		p1->next = NULL;
		free(p2);
	}
}



void SListErase(SListNode** phead, SListNode* pos)
{
	if (!(* phead) )
	{
		printf("这是空的，无法操作");
	}
	else if (*phead == pos)
	{
		SListFrontPop(phead);
	}
	else
	{
		SListNode* ps = *phead;
		SListNode* px = NULL;
		while (ps->next != pos)
		{
			ps = ps->next;
		}
		px = pos->next;
		ps->next = px;
		free(pos);
	}

	
}
//改
void SListChange(SListNode* phead, SLTDataType x, SLTDataType y)
{
	SListNode* pos = SListFind(phead, x);
	if (pos == NULL)
	{
		printf("找不到该数据");
	}
	pos->data = y;
}
//打印函数
void SListPrint(SListNode* phead)
{
	while (phead != NULL)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}
	printf("NULL\n");
}


void Text()
{
	SListNode* list = NULL;  //头指针
	/*SListPushFront(&list, 1);
	SListPushFront(&list, 2);
	SListPushFront(&list, 3);
	SListPushFront(&list, 4);
	SListPushFront(&list, 5);
	SListPrint(list);*/
	SListPushBack(&list, 1);
	SListPushBack(&list, 2);
	SListPushBack(&list, 3);
	SListPushBack(&list, 4);
	SListPushBack(&list, 5);
	SListPrint(list);
	/*SListPopFront(&list);
	SListPopFront(&list);
	SListPopFront(&list);
	SListPrint(list);*/
}
int main()
{
	Text();
	return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
