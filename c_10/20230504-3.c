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
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i; 
    }
        return result;
}