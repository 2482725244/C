
void print()
{
	printf("********************************\n");
	printf("********1.start  2.end**********\n");
}
void chushihua(char arr[hang][lie],int hang,int lie)
{
	int i,j;
	for(i=0;i<hang,i++)
	{
		for(j=0;j<lie,j++)
		{
			arr[i][j]=' ';
		}
	 } 
}

void qiban()
{
	int i,j,p;
	for(p=0;p<hang;p++)
	{
		for(i=0;i<hang;i++)
	{
		printf(" %c ");
		if(i<hang-1)
		printf("|");
	}
	printf("\n");
	if(p<hang-1)
	for(j=0;j<lie;j++)
	{
		printf("---");
		if(j<lie-1)
		printf("|");
	 } 
	 printf("\n")
	}
	
}












