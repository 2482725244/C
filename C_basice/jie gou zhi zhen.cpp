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
	printf("�������%s\n",b1.mc);
	printf("��ļ۸���%d\n",b1.jg);
//	*p.jg=60;
//	b1.mc="jave";
	b1.jg=55;
	strcpy(b1.mc,"jave");
	printf("���޸ĺ������%s\n",b1.mc);
	printf("���޸ĺ�ļ۸���%d\n",b1.jg);
}
