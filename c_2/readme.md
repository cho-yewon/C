# 2023-03-09 3주차 수업
``` c
/*두 개의 숫자의 합을 계산하는 프로그램*/
#include <stdio.h>

int main(void)
{
    int x;   // 첫 번째 정수를 저장할 변수
    int y;   // 두 번째 정수를 저장할 변수
    int sum; // 두 정수의 합을 저장하는 변수
    x = 100;
    y = 200;
    sum = x + y;
    printf("두 수의 합 : %d", sum); //%d 정수 형식 지정자
    return 0;
}
```

``` c
// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, sum = 0;

    printf("첫번째 숫자를 입력하세요 : ");
    scanf("%d", &x);
    
    printf("두번째 숫자를 입력하세요 : ");
    scanf("%d", &y);
    
    sum = x + y;

    printf("두 수의 합 : %d", sum);

    return 0;
}
```
