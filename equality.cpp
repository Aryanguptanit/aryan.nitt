#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	{
		
		printf("all number are equal");
		
	}
	else if(a!=b&&b!=c&&a!=c)
	printf("all number are different");
	else if (a=b)
	{
		if(b!=c)
		printf("neither all are equal or different");
		
		
		
	}
	
	else if (a=c)
	{
		if (c!=b)
	printf("neither all are equal or different");	
		
		
		
	}
	
	else if (b=c)
	{
		if(b!=a) 
		printf("neither all are equal or different");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
