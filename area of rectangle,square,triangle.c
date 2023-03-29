#include<stdio.h>
main()
{
	int l,b,h,num,area;
	printf("Enter a number :- ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("Enter the value of length :-");
			scanf("%d",&l);
			area=l*l;
			printf("Area of square is %d ",area);
			break;
			
		case 2:
			printf("Enter the value of l and b :-");
			scanf("%d %d",&l,&b);
			
			printf("area of rectangle is %d",l*b);
			break;
			
		case 3:
			printf("enter the value of b and h :-");
			scanf("%d %d",&b,&h);
			
			printf("area of triangle is %d",b*h/2);
			break;
			
		default:
			printf("invalid input");
	}
}
