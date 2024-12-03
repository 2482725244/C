#include<stdio.h>
#include<stdlib.h>
int px(const void*e1,const void*e2)
{
	return ((xs*)e1)->(age)- ((xs*)e2)->(age);
}
typedef struct bs
{
	char name[20];
	int age;
}xs;
main()
{
	xs arr[3]={{"张三",20},{"李四",21},{"王五",19}}
	qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),t_px);
	for(int i=0;i<3;i++)
	{
		printf("%s",arr[i].name);
		printf("%d",arr[i].age);
		printf("\n");
	}
}



/*
#include<stdio.h>
#include<stdlib.h>
int t_jg(const void*e1,const void*e2)
{
	return((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
struct stu
{
	char name[20];
	int age;
};
main()
{
	struct stu y[3]={{"张三",25},{"李四",20},{"王五",19}};
	for(int i=0;i<3;i++)
	{
		printf("%s\t",y[i].name);
		printf("%d\t",y[i].age);
		printf("\n");
	} 
	qsort(y,sizeof(y)/sizeof(y[0]),sizeof(y[0]),t_jg);
	for(int i=0;i<3;i++)
	{
		printf("%s\t",y[i].name);
		printf("%d\t",y[i].age);
		printf("\n");
	} 
}


#include<stdio.h>
void t_qsort(void* start,int an,int w,int (*p)(const void*e1,const void*e2))
{
	for(int i;i<an-1;i++)
		for(int j=0;j<an-1-i;j++)
		{
			//(char*)start;
			if((p((char*)start+j*w,(char*)start+w+j*w))>0)
			for(int h=0;h<w;h++)
			{
				char*fr=(char*)start+j*w;
			//	char*tw=(char*)start+w+j*w;
				char*tw=(char*)start+(j+1)*w;
				char t=*fr;
				*fr=*tw;
				*tw=t;
				fr++;
				tw++;
			}
		}
}
int t_fz(const void*e1,const void*e2)
{
	return(int*)e1-(int*)e2;
}
main()
{
	int arr[6]={6,5,2,3,1,4};
	for(int i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	t_qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),t_fz);
	for(int i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
}





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
	return(int*)e1-(int*)e2;
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
}*/





