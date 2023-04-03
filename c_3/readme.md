# 2023-03-16 3주차 C언어 수업
``` c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float radius;
    float area;

    printf("반지름을 입력하세요 : ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("원의 면적 : %f", area);

    return 0;
}
```

``` c
#include <stdio.h>

int main(void)
{
    int a,b;

    printf("안녕하세요");
    scanf("%d",&a);
    scanf("%d %d",&a, &b);
}
```

```c
#include <stdio.h> //전처리부분
// #include (포함하다)   stdio : standard input output
int main(void) // main은 프로그램의 주진입점(시작) 반드시 1개
{
    printf("Hello World"); // printf : 화면에 무조건 출력X 스캐너, 프린터, 파일 등 "출력"해주는 표준 출력 함수
} // 사용자 문자는 무조건 큰따옴표("")로 표시
```
