# 2023-04-06 6주차 C언어 수업
```c
#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;

    printf("출력하고 싶은 단: ");
    scanf("%d", &n);

    while (i <= 9)
    {
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    }

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;

    printf("출력하고 싶은 단: ");
    scanf("%d", &n);

    while (1)
    {
        printf("%d * %d = %d \n", n, i, n*i);
        i++;

        if(i==10)
        {
            break;
        }
    }

    return 0;
}
```
```c
#include <stdio.h>

int main()
{
    int sum=0 , n, i=1;

    printf("정수를 입력하시오 : ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;
        i++;
    }

    printf("1부터 %d까지의 합은 %d입니다", n, sum);
    return 0;
}
```
```C
#include <stdio.h>

int main()
{
    int sum=0 , n, i=1;

    printf("정수를 입력하시오 : ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i++;
    }

    printf("1부터 %d까지의 합은 %d입니다", n, sum);
    return 0;
}
```
```C
#include <stdio.h>

int main()
{
    int i=0,n,sum=0;

    while(i<5)
    {
        printf("값을 입력하시오 : ");
        scanf("%d", &n);
        sum+=n;

        i++;
    }
    printf("합계는 %d입니다.",sum);

    return 0;
}
```
```c
#include <stdio.h>
int main(void)
{
    int i=0;

    do
    {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("4---종료\n");
        printf("하나를 선택하시요\n");
        scanf("%d", &i);
    } while (i!=4);

    printf("선택된 메뉴=%d\n", i);

    return 0;
}
```
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int answer=rand()%100;
    int guess, tries=0;

    do
    {
        printf("정답을 추측하시오 : ");
        scanf("%d",&guess);
        tries++;
        if(guess>answer)
        {
            printf("LOW\n");
        }
        if(guess<answer)
        {
            printf("HIGH\n");
        }
    }while(guess!=answer);
    printf("축하합니다. 시도횟수=%d",tries);
    return 0;
}
```
