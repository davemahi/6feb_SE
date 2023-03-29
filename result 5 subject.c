// wap to find percentage and total of 5 subject
#include<stdio.h>
main()
{
	float avg,total,sub1,sub2,sub3,sub4,sub5;
	printf("enter marks of 5 subject ");
	scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	printf("\nTotal is %f",total);
	avg=total/5;
	printf("\nThe percentage is %f",avg);
	if(avg>=75)
	{
		printf("\ndistinstion");
	}
	else if(avg>60 && avg<=75)
	{
		printf("\nfirst class");
	}
	else if(avg>50 && avg<=60)
	{
		printf("\nsecond class");
	}
	else if (avg>35 && avg<=50)
	{
		printf("\npass class");
	}
	else
	{
		printf("\nfail");
	}
}
