#include<stdio.h>
main()
{
	int row,col,n=1;
	printf("enter the number of row");
	scanf("%d",&row);
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}

