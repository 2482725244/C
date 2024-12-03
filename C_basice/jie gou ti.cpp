#include<stdio.h>
    struct BOOK 
{
	char m[20];
	short j;
};
main()
{
	struct BOOK b={"c++",15};
	printf("书的名字是%s\n",b.j);
	printf("书的价格是%d元\n",b.j);
 } 
