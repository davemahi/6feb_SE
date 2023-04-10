#include<stdio.h>
main()
{
	FILE*file1;
	
	char data[40];
	printf("enter data");
	scanf("%s",data);
	
	 file1 = fopen("test.txt","a");
	 fprintf(file1,"%s",data);
	fclose(file1);
	
	file1 = fopen("test.txt","r");
	fscanf(file1,"%s",&data);
	fscanf(file1,"%s",&data);
	
	printf("%s",&data);
}
