#include<stdio.h>

int n, a, max;
float x;

int main()
{
	x=0;
	max=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a);
		x+=a*100;
		if(a>max)
		{
			max=a;
		}
	}
	
	printf("%f", x/max/n);
}
