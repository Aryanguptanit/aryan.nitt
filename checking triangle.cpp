#include<stdio.h>
int main()
{
	int a;
	printf("enter 1st side");
	scanf("%d",&a);
	int b;
	printf("enter 2nd side");
	scanf("%d",&b);
	int c;
	printf("enter 3rd side");
	scanf("%d",&c);
	printf("%d %d %d", a,b,c);
	if(a+b>c||a+c>b||b+c>a){
		if(a==b && b == c){
			printf("this is triangle");
		}
//		printf("this is triangle");
	}
	else{
		printf("not a triangle");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
