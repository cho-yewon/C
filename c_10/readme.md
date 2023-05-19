# 2023-05-04 10주차 C수업

```c
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
```
```c
#include <stdio.h>

int get_integer();
int add(int x, int y);
int minus(int x, int y);
int multi(int x, int y);
int div(int x, int y);

int main()
{
    int x, y;
    x = get_integer();
    y = get_integer();

    printf("두 수의 합 : %d\n", add(x, y));
    printf("두 두의 차 : %d\n", minus(x, y));
    printf("두 수의 곱 : %d\n", multi(x, y));
    printf("두 수의 몫 : %d", div(x, y));

    return 0;
}

int get_integer()
{
    int value;

    printf("정수를 입력하시오 : ");
    scanf("%d", &value);

    return value;
}

int add(int x, int y)
{
    return x + y;
}

int minus(int x, int y)
{
    return x - y;
}

int multi(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}
```
```c
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
```
```c
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
```
