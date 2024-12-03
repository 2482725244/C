/*#include<stdio.h>
#include<math.h>
int main()
{
	for(float y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(float x=-1.5f;x<1.5f;x+=0.05f)
		{
			float a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0f?'*':'');
		}
		putchar('');
	}
}*/

#include<stdio.h>
#include<math.h>
#include<stdio.h>
int main()
{
	float y,x,z,f;
	for(y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(x=-1.5f;x<1.5f;x+=0.05f)
		{
			z=x*x+y*y-1;
			f=z*z*z-x*x*y*y*y;
			putchar(f<=0.0f?".:-=+*#%@"[(int)(f*-8.0f)]£º'');
		}
		putchar('\n');
	}
	getchar();
	return 0;
}





