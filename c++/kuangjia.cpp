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
	}
 } 
