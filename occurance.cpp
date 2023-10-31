#include<stdio.h>
int main()
{
	int i ,c=0,a;
	printf("enter number:");
	scanf("%d",&i);
		int arr[i],j,t;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	printf("enter element who occurence is known:");
	scanf("%d",&a);
	for(t=0;t<i;t++){
		
		if(arr[t]==a){
		
					c=c+1;
				}
				
			}
		
	
	

	
		printf("%d",c);
		
	}
