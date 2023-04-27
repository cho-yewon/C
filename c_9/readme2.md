# 2023-04-27 9주차 C언어 수업(11~20번 예제)

```c
/* 정수 상수 프로그램*/
#include <stdio.h>

int main(void)
{
    int x = 10;   // 10은 10진수이고 int형이고 값은 십진수로 10이다.
    int y = 010; // 010은 8진수이고 int형이고 값은 십진수로 8이다.
    int z = 0x10; // 010은 16진수이고 int형이고 값은 십진수로 16이다.

    printf("x = %d", x);
    printf("y = %d", y);
    printf("z = %d", z);

    return 0;
}
```
```c
#include <stdio.h>
#define TAX_RATE 0.2

int main(void)
{
    const int MONTHS = 12;
    int m_salary, y_salary;        // 변수 선언

    printf("월급을 입력하시요: "); // 입력 안내문
    scanf("%d", &m_salary);

    y_salary = MONTHS * m_salary; // 순수입 계산
    printf("연봉은 %d입니다.", y_salary);
    printf("세금은 %f입니다.", y_salary * TAX_RATE);
    
    return 0;
}
```
```c
/* 2의 보수 프로그램*/
#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = -3;

    printf("x = %08X\n", x);       // 8자리의 16진수로 출력한다.
    printf("y = %08X\n", y);       // 8자리의 16진수로 출력한다.
    printf("x+y = %08X\n", x + y); // 8자리의 16진수로 출력한다.
    
    return 0;
}
```
```c
/* 부동 소수점 자료형의 크기 계산*/
#include <stdio.h>

int main(void)
{
    float x = 1.234567890123456789;
    double y = 1.234567890123456789;

    printf("float의 크기=%d\n", sizeof(float));
    printf("double의 크기=%d\n", sizeof(double));
    printf("x = %30.25f\n", x);
    printf("y = %30.25f\n", y);
    
    return 0;
}
```
```c
/* 문자 변수와 문자 상수*/
#include <stdio.h>

int main(void)
{
    char code1 = 'A'; // 문자 상수로 초기화
    char code2 = 65;  // 아스키 코드로 초기화

    printf("code1 = %c\n", code1);
    printf("code2 = %c\n", code2);

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    char code = 'A';

    printf("%d %d %d \n", code, code + 1, code + 2); // 65 66 67이 출력된다.
    printf("%c %c %c \n", code, code + 1, code + 2); // A B C가 출력된다.

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    double light_speed = 300000;   // 빛의 속도 저장하는 변수
    double distance = 149600000;   // 태양과 지구 사이 거리 저장하는 변수 149600000km로 초기화한다.
    double time;                   // 시간을 나타내는 변수

    time = distance / light_speed; // 거리를 빛의 속도로 나눈다.
    time = time / 60.0;            // 초를 분으로 변환한다.

    printf("빛의 속도는 %fkm/s \n", light_speed);
    printf("태양과 지구와의 거리 %fkm \n", distance);
    printf("도달 시간은 %f초\n", time); // 시간을 출력한다.

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    int x, y, result;

    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = x + y; // 덧셈
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
    
    printf("두개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    result = x + y; // 덧셈 연산을 하여서 결과를 result에 대입
    printf("%f + %f = %f", x, y, result);

    result = x - y;
    printf("%f - %f = %f", x, y, result);

    result = x * y;
    printf("%f * %f = %f", x, y, result);

    result = x / y;
    printf("%f / %f = %f", x, y, result);

    return 0;
}
```
```c
// 나머지 연산자 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60 // 1분은 60초

int main(void)
{
    int input, minute, second;

    printf("초를 입력하시요: ");
    scanf("%d", &input);             // 초단위의 시간을 읽는다.

    minute = input / SEC_PER_MINUTE; // 몇 분
    second = input % SEC_PER_MINUTE; // 몇 초

    printf("%d초는 %d분 %d초입니다. \n", input, minute, second);
    
    return 0;
}
```
