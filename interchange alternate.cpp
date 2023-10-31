#include<stdio.h>
int main()
{
	int i;
	printf("enter number:");
	scanf("%d",&i);
		int arr[i],j,t;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	for(j=0;j<i;j=j+2){
	
			
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
			
			
			
			
		}
		
		for(j=0;j<i;j++){
			
			
			printf("%d",arr[j]);
		}
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 
