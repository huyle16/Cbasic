#include <stdio.h>
int main()
{
	int a;
	printf("nhap vao so a: ");
	scanf("%d", &a);
	if(a>0){
		switch(a%2){
			case 0:
				printf(" la so chan");
				break;
			case 1:
				printf(" la so le");
				break;
		}
	}
	return 0;
	
}
