#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("알고 싶은 팩토리얼의 값 : ");
    scanf("%d", &n);
    printf("%d!의 값은 %d입니다\n", n, factorial(n));
    
    return 0;
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}