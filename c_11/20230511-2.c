#include <stdio.h>

int get_integer(void)
{
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    return n;
}

int is_prime(int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {

        if (n % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n;
    int i, j;
    int count = 0;

    n = get_integer();

    if (is_prime(n) == 1)
    {
        printf("%d은 소수입니다.\n", n);
    }
    else
    {
        printf("%d은 소수가 아닙니다.\n", n);
    }

    /*for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
            if (count == 2)
            {
                printf("%d", i);
                count = 0;
                break;
            }
        }
        
        printf(" ");
    }*/

    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
    }

    return 0;
}