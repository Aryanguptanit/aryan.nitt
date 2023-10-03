#include<stdio.h>
int main()
{
	int a;
	printf("enter 1st number:");
	scanf("%d",&a);
		int b;
	printf("enter 2nd number:");
	scanf("%d",&b);
		int c;
	printf("enter 3rd number:");
	scanf("%d",&c);
	if(a>b&&a>c){
		printf("%d",a);
	}
	if(b>c&&b>a){
		printf("%d",b);
	}
	else {
		printf("%d",c);
	}
	
	
	
	
	
	
	return 0;
}
