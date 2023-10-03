#include<stdio.h>
int main()
{
	float basic,da,hra,ta,others;
	float pf,it;
	float net_salary;
	printf("enter basic salary($):");
	scanf("%f",&basic);
	printf("enter hra($):");
	scanf("%f",&hra);
	printf("enter ta($):");
	scanf("%f",&ta);
	printf("enter others ($):");
	scanf("%f",&others);
	da=(basic*12)/100;
	pf=(basic*14)/100;
	it=(basic*15)/100;
	net_salary=basic+da+hra+ta+others-(pf+it);
printf("net salary is:$%.02 f/h",net_salary;)	
	
	

	return 0;
}
