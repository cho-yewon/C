# 2023-04-13 7주차 C언어 수업
```c
#include <stdio.h>

int main()
{
    int A, B;

    while(1)
    {
        scanf("%d %d",&A, &B);
        if(A==0&&B==0)
        {
            break;
        }
        printf("%d\n",A+B);
    }
    return 0;
}
```
```c
#include <stdio.h>

void print_stars()
{
    for (int i = 0; i < 30; i++)
    {
        printf("*");
    }
}
int main()
{
    print_stars();
    printf("\nHello World\n");
    print_stars();
    printf("\n");

    return 0;
}
```
```c
#include <stdio.h>

int max(int x, int y)
{
    return x>y ? x : y;
}

int main(void)
{
    int x, y, larger;

    printf("정수 2개를 입력하시오 : ");
    scanf("%d %d", &x, &y);

    larger = max(x, y);
    printf("더 큰 값은 %d입니다.\n", larger);

    return 0;
}

```
