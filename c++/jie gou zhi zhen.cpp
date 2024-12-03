#include<stdio.h>
#include<string.h>
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
	strcpy(b1.mc,"jave");
	printf("书修改后的名称%s\n",b1.mc);
	printf("书修改后的价格是%d\n",b1.jg);
}
