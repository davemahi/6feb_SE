#include <stdio.h>
int main()
{
	int i,MAX_SIZE;
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    printf("Enter any string: ");
    gets(text1);
    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }
    text2[i] = '\0';

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);


}
