#include <stdio.h>
int main()
{
	int a,b,c , max ;

	printf("nhap a = ",&a);
	scanf("%d",&a);
	printf("nhap b = ",&b);
	scanf("%d",&b);
	printf("nhap c = ",&c);
	scanf("%d",&c);
	max = a ;
	if (a>b && a>c ) max=a;
	else if(b>a && b>c) max=b;
	else if(a<c && b<c) max=c;
	
	printf("MAX la  %d",max);
	
	return 0;
}
	
	
