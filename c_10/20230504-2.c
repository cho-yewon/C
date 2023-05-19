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