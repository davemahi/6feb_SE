#include<stdio.h>
main()
{
	int i,j,n,k;
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			 if(arr[j]<arr[i])
			 {
			 k=arr[i];
			 arr[i]=arr[j];
			 arr[j]=k;
		}
	}	}
	printf("arrange the numbers in assending order %d",arr[i]);
}
