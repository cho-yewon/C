#include <stdio.h>

int main()
{
    double x, y, result;
    printf("두 개의 실수를 입력하시오 : ");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%lf + %lf = %lf", x, y, result);
    result = x - y;
    printf("%lf - %lf = %lf", x, y, result);
    result = x * y;
    printf("%lf * %lf = %lf", x, y, result);
    result = x / y;
    printf("%lf / %lf = %lf", x, y, result);

    return 0;
}