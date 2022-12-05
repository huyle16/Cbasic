#include <stdio.h>
int main()
{
	int a,b,c,d,max;
	printf("nhap a\n");
	scanf("%d",&a);
	printf("nhap b\n");
	scanf("%d",&b);
	printf("nhap c\n");
	scanf("%d",&c);
	printf("nhap d\n");
	scanf("%d",&d);
	if (a>b && a>c && a>d)
	{
		max=a;
	}
	else if(b>a && b>c && b>d)
	{
		max=b;
	}
	else if(c>a && c>b && c>d)
	{
		max=c;
	}
	else if(d>a && d>c && d>b)
	{
		max=d;
	}
	printf("so lon nhat la %d",max);
	
}
