#include <stdio.h>
 main()
{
    int i, start;
    printf("Enter starting value: ");
    scanf("%d", &start);
    for(i=start; i>=1; i--)
    {
        printf("%d\n", i);
    }
}

