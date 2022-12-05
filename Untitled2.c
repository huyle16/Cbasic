#include <stdio.h>
int main()
{
	int x,y;
	char operator;
	scanf("%c",&operator);
	printf("nhap x= "); scanf("%d", &x);
	printf("nhap y= "); scanf("%d", &y);
	switch(operator){
		case '+':
		printf("%d + %d = %d",x,y, x + y);
		break;
		case '-':
		printf("%d - %d = %d",x,y, x - y);
		break;
		case '*':
		printf("%d * %d = %d",x,y, x * y);
		break;
		case '/':
		printf("%d / %d = %d",x,y, x/y);
		break;
		default:
		printf("input invalid!");
	}	
}
