#include<stdio.h>
    struct BOOK 
{
	char m[20];
	short j;
};
main()
{
	struct BOOK b={"c++",15};
	printf("���������%s\n",b.j);
	printf("��ļ۸���%dԪ\n",b.j);
 } 
