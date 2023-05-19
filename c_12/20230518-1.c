#include <stdio.h>

int main()
{
    int s, e, i, j;

    while (1)
    {
        scanf("%d %d", &s, &e);
        if ((s >= 2 && s <= 9) && (e >= 2 && e <= 9))
        {
            for (i = 1; i <= 9; i++)
            {
                if (s < e)
                {

                    for (j = s; j <= e; j++)
                    {
                        printf("%d * %d = %2d   ", j, i, j * i);
                    }
                    printf("\n");
                }

                else
                {

                    for (j = s; j >= e; j--)
                    {
                        printf("%d * %d = %2d   ", j, i, j * i);
                    }
                    printf("\n");
                }
            }
            break;
        }
        else
        {
            printf("Input Error!\n");
        }
    }

    /*if ((s < 2 || e < 2) || (s > 9 || e > 9))
    {
        printf("X");
    }
    else
    {
        printf("O");
    }*/
}