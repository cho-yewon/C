# 2023-04-27 9주차 C언어 수업(1~10번 예제)

```c
/* 두 개의 숫자의 합을 계산하는 프로그램 */
#include <stdio.h>

int main(void)
{
    int x;   // 첫 번째 정수를 저장할 변수
    int y;   // 두 번째 정수를 저장할 변수
    int sum; // 두 정수의 합을 저장하는 변수

    x = 100;
    y = 200;

    sum = x + y;
    printf("두수의 합 : % d", sum);
    
    return 0;
}
```
```c
/* 첫번째 프로그램 */
#include <stdio.h>

int main(void)
{
    printf("Hello World!");
    return 0;
}
```
```c
// 정수 간의 가감승제를 계산하는 프로그램
#include <stdio.h>

int main(void)
{
    int x;                   // 첫 번째 정수를 저장할 변수
    int y;                   // 두 번째 정수를 저장할 변수
    int sum, diff, mul, div; // 두 정수 간의 연산의 결과를 저장하는 변수

    x = 20;                  // 변수 x에 2을 저장
    y = 10;                  // 변수 y에 10을 저장
    sum = x + y;             // 변수 sum에 (x+y)의 결과를 저장
    diff = x - y;            // 변수 diff에 (x-y)의 결과를 저장
    mul = x * y;             // 변수 mul에 (x*y)의 결과를 저장
    div = x / y;             // 변수 div에 (x/y)의 결과를 저장

    printf("두수의 합: %d\n", sum);  // 변수 sum의 값을 화면에 출력
    printf("두수의 차: %d\n", diff); // 변수 diff의 값을 화면에 출력
    printf("두수의 곱: %d\n", mul);  // 변수 mul의 값을 화면에 출력
    printf("두수의 몫: %d\n", div);  // 변수 div의 값을 화면에 출력

    return 0;
}
```
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x; // 정수를 저장할 변수

    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    printf("입력된 정수 = %d \n", x);
    
    return 0;
}
```
```c
// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;                               // 첫번째 정수를 저장할 변수
    int y;                               // 두번째 정수를 저장할 변수
    int sum;                             // 2개의 정수의 합을 저장할 변수

    printf("첫번째 숫자를 입력하시오:"); // 입력 안내 메시지 출력
    scanf("%d", &x);                     // 하나의 정수를 받아서 x에 저장
    printf("두번째 숫자를 입력하시오:"); // 입력 안내 메시지 출력
    scanf("%d", &y);                     // 하나의 정수를 받아서 x에 저장
    
    sum = x + y;                         // 변수 2개를 더한다.
    printf("두수의 합: %d", sum);        // sum의 값을 10진수 형태로 출력

    return 0;                            // 0을 외부로 반환
}
```
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float radius; // 원의 반지름
    float area;   // 면적

    printf("반지름을 입력하시오 : ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("원의 면적 : %f\n", area);
    
    return 0;
}
```
```c
/* 환율을 계산하는 프로그램*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double rate;                                      // 원/달러 환율
    double usd;                                       // 달러화
    int krw;                                          // 원화는 정수형 변수로 선언

    printf("환율을 입력하시오: ");                    // 입력 안내 메시지
    scanf("%lf", &rate);                              // 사용자로부터 환율입력
    printf("원화 금액을 입력하시오: ");               // 입력 안내 메시지
    scanf("%d", &krw);                                // 원화 금액 입력

    usd = krw / rate;                                 // 달러화로 환산
    printf("원화 %d원은 %lf달러입니다.\n", krw, usd); // 계산 결과 출력

    return 0;                                         // 함수 결과값 반환
}
```
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double num1, num2, num3;
    double sum, avg;

    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3); // 3개의 실수 입력
    sum = num1 + num2 + num3;
    avg = sum / 3.0;

    printf("합계=%.2lf\n", sum); // 소수점 이하를 2자리로 표시
    printf("평균=%.2lf\n", avg);

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    int x;

    printf("변수x의 크기: %d\n", sizeof(x));
    printf("char형의 크기: %d\n", sizeof(char));
    printf("int형의 크기: %d\n", sizeof(int));
    printf("short형의 크기: %d\n", sizeof(short));
    printf("long형의 크기: %d\n", sizeof(long));
    printf("float형의 크기: %d\n", sizeof(float));
    printf("double형의 크기: %d\n", sizeof(double));
    
    return 0;
}
```
```c
#include <stdio.h>
#include <limits.h>

int main(void)
{
    short s_money = SHRT_MAX;           // 최대값으로 초기화한다. 32767
    unsigned short u_money = USHRT_MAX; // 최대값으로 초기화한다. 65535

    s_money = s_money + 1;
    printf("s_money = %d", s_money);
    u_money = u_money + 1;
    printf("u_money = %d", u_money);
    
    return 0;
}
```
