#include <stdio.h>

int main()
{
    int i, j,temp;

    scanf("%d",&temp);

    for(i=1;i<=temp;i++)
    {
        for(j=1;j<=temp-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}