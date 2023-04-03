# 2023-03-30 5주차 C언어 수업
```c
#include <stdio.h>

int main()
{
    int number;

    printf("정수를 입력하시오 : ");
    scanf("%d", &number);

    if(number>0)
    {
        printf("양수입니다.\n");
    }
    printf("입력된 값은 %d입니다.",number);

    return 0;
}
```

```c
#include <stdio.h>

int main(void)
{
    int number;

    printf("정수를 입력하시오:");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("입력된 정수는 짝수입니다.\n");
    } 
    else
    {
        printf("입력된 정수는 홀수입니다.\n");
    }  

    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    char ch;
    printf("문자를 입력하시오 : ");

    ch = getchar();
    if (ch >= 65 && ch <= 90)
    {
        printf("%c는 대문자입니다.\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c는 소문자입니다.\n", ch);
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("%c는 숫자입니다.\n", ch);
    }
    else
    {
        printf("%c는 기타문자입니다.\n", ch);
    }

    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if ((-10000 <= a && a <= 10000) && (-10000 <= b && b <= 10000))
    {
        if (a < b)
        {
            printf("<");
        }
        else if (a > b)
        {
            printf(">");
        }
        else
        {
            printf("==");
        }
    }
    else
    {
        printf("허용되지 않는 범위입니다");
    }
}
```

```c
#include <stdio.h>

int main()
{
    char op;
    int x, y, result;
    printf("수식을 입력하시오(예 : 2 + 5)>>");
    scanf("%d %c %d", &x, &op, &y);

    switch (op)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;
    case '%':
        result = x % y;
        break;
    default:
        printf("지원되지 않는 연산자입니다.\n");
        break;
    }

    printf("%d %c %d = %d\n", x, op, y, result);
    return 0;
}
```
