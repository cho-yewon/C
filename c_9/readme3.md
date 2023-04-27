# 2023-04-27 9주차 C언어 수업(21~30번 예제)

```c
#include <stdio.h>

int main(void)
{
    int x = 10, y = 10;

    printf("x=%d\n", x);
    printf("++x의 값=%d\n", ++x);
    printf("x=%d\n\n", x);

    printf("y=%d\n", y);
    printf("y++의 값=%d\n", y++);
    printf("y=%d\n", y);
    
    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    int money, change;
    int price, c5000, c1000, c500, c100;

    printf("물건 값을 입력하시오: ");
    scanf("%d", &price); // 물건 값을 입력받는다.
    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &money);    // 물건 값을 입력받는다.

    change = money - price; // 거스름돈을 change에 저장
    c1000 = change / 1000;  // 남은 잔돈에서 1000원권의 개수를 계산한다.
    change = change % 1000; // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.
    c500 = change / 500;    // 남은 잔돈에서 500원 동전의 개수를 계산한다.
    change = change % 500;  // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.

    printf("\n천원권: %d장\n", c1000);
    printf("오백원 동전: %d개\n", c500);
    printf("백원 동전: %d개\n", c100);

    return 0;
}
```
```c
/*대입 연산자 프로그램*/
#include <stdio.h>

int main(void)
{
    int x, y;
    x = 1;
    
    printf("수식 x+1의 값은 %d\n", x + 1);
    printf("수식 y=x+1의 값은 %d\n", y = x + 1);
    printf("수식 y=10+(x=2+7)의 값은 %d\n", y = 10 + (x = 2 + 7));
    printf("수식 y=x=3의 값은 %d\n", y = x = 3);

    return 0;
}
```
```c
// 복합 대입 연산자 프로그램
#include <stdio.h>

int main(void)
{
    int x = 10, y = 10, z = 33;

    x += 1;
    y *= 2;
    z %= 10 + 20;

    printf("x=%d y=%d z=%d\n", x, y, z);

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("두개의 정수를 입력하시오 : ");
    scanf("%d%d", &x, &y);

    printf("x == y의 결과값 : %d", x == y);
    printf("x != y의 결과값 : %d", x != y);
    printf("x > y의 결과값 : %d", x > y);
    printf("x < y의 결과값 : %d", x < y);
    printf("x >= y의 결과값 : %d", x >= y);
    printf("x <= y의 결과값 : %d", x <= y);

    return 0;
}
```
```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b;

    a = (0.03 * 3) + 0.1;
    b = 1;

    printf("a==b의 결과 : %d\n", a == b);
    ptinrf("fabs(a-b)<0.00001의 결과 : %d\n", fabs(a - b) < 0.00001);
    
    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("두개의 정수를 입력하시오 : ");
    scanf("%d %d", &x, &y);

    printf("%d && %d의 결과값 : %d\n", x, y, x && y);
    printf("%d || %d의 결과값 : %d\n", x, y, x || y);
    printf("!%d의 결과값 : %d\n", x, !x);

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    int year, result;

    printf("연도를 입력하시오 : ");
    scanf("%d", &year);

    result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 4 == 0);
    printf("result = %d\n", result);

    return 0;
}
```
```c
// 조건 연산자 프로그램
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("정수 2개 : ");
    scanf("%d %d", &x, &y);

    printf("큰 수 = %d\n", (x > y) ? x : y);
    ptintf("작은 수 = %d\n", (x < y) ? x : y);

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    printf("AND : %08X\n", 0x9 & 0xA);
    printf("OR : %08X\n", 0x9 | 0xA);
    printf("XOR : %08X\n", 0x9 ^ 0xA);
    printf("NOT : %08X\n", ~0x9);
    printf("<< : %08X\n", 0x4 << 1);
    printf(">> : %08X\n", 0x4 >> 1);

    return 0;
}
```
