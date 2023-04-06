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
