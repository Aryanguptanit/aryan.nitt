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
	int k=i-1;
	for(j=0;j<i/2;j=j+1){
	
			
			t=arr[j];
			arr[j]=arr[k];
			arr[k]=t;
		
		}
		
		for(j=0;j<i;j++){
			
			
			printf("%d ",arr[j]);
		}
		
		
		
	}
