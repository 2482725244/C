#include<stdio.h>
//void t_qsort(void* start,int an,int w,int (*p)(const void*e1,const void*e2))
void t_qsort(void* start,int an,int w,int (*p)(void*e1,void*e2))
{
	for(int i;i<an-1;i++)
		for(int j=0;j<an-1-i;j++)
		{	
			char* fr=(char*)start+j*w;
			//	char*tw=(char*)start+w+j*w;
			char* tw=(char*)start+(j+1)*w;
			//(char*)start;
			//if((p((char*)start+j*w,(char*)start+w+j*w))>0)
			if((p(fr,tw))>0)
			{
				for(int h=0;h<w;h++)
				{
					char t=*fr;
					*fr=*tw;
					*tw=t;
					fr++;
					tw++;
				}
			}		
		}
}
//int t_fz(const void*e1,const void*e2)
int t_fz(void*e1,void*e2)
{
	return *(int*)e1 - *(int*)e2;
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
} */
