#include<stdio.h>
int main()
{
	int s, i;
	printf("enter number of element:");
	scanf("%d",&i);
	int arr[i],j,t;
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}
	
	for(s=0;s<100000;s++)
	
	{
		for(j=0;j<i;j++){
		
		if(arr[j]<arr[j+1]&&j+1!=i){
			
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
			
			
		}
		}
		
		
	}
	for(j=0;j<i;j++){
		
		printf("%d ",arr[j]);
	}
	
	
	return 0;
	
}
