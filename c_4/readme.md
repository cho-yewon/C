# 2023-03-23 4주차 C언어 수업
```c
#include <stdio.h>

int main()
{
    char code = 'A';
    printf("%d %d %d\n", code, code + 1, code + 2);
    printf("%c %c %c\n", code, code + 1, code + 2);

    return 0;
}
```

``` c
#include <stdio.h>
int main(void)
{
int x, y, result;
printf("두개의 정수를 입력하시오: ");
scanf("%d %d", &x, &y);
result = x + y;
printf("%d + %d = %d", x, y, result);
result = x - y; // 뺄셈
printf("%d - %d = %d", x, y, result);
result = x * y; // 곱셈
printf("%d + %d = %d", x, y, result);
result = x / y; // 나눗셈
printf("%d / %d = %d", x, y, result);
result = x % y; // 나머지
printf("%d %% %d = %d", x, y, result);
return 0;
}
```

```c
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
```

```c
#include <stdio.h>

int main(void)
{
    int x = 10, y = 10;
    printf("x=%d\n", x);
    printf("++x의 값 = %d\n", ++x);
    printf("x=%d\n\n", x);
    printf("y=%d\n", y);
    printf("y++의 값 = %d\n", y++);
    printf("y=%d\n", y);
    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    int price, input_money, money;

    printf("물건 값을 입력하시오 : ");
    scanf("%d",&price);

    printf("투입한 금액을 입력하시오 : ");
    scanf("%d",&input_money);

    printf("거스름돈은 다음과 같습니다.\n\n");

    money=input_money-price;
    
    printf("천원권 : %d장\n",money/1000);
    money=money%1000;
    
    printf("오백원 : %d개\n",money/500);
    money=money%500;
    
    printf("백원 : %d개\n",money/100);
    money=money%100;

    return 0;
}
```
