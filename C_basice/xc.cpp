#include<stdio.h>
int main()
{
	int c = 0;
	char ch[] = "abcdcf";
	char* p = ch;
	for (int i = 0; i < 6; i++)
	{
		if (p[i] == 'c')
		{
			c++;
			int y=i;
			for (int j = 0; j < 5 - i; j++)
			{
				p[y] = p[y + 1];
				y++;
			}
			p[6-c] = '\0';
		}
	}
	printf("%s", p);
	return 0;
}
