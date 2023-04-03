#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if ((-10000 <= a && a <= 10000) && (-10000 <= b && b <= 10000))
    {
        if (a < b)
        {
            printf("<");
        }
        else if (a > b)
        {
            printf(">");
        }
        else
        {
            printf("==");
        }
    }
    else
    {
        printf("허용되지 않는 범위입니다");
    }
}