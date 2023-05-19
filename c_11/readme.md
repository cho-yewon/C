# 2023-05-11 11주차 C수업
```c
#include <stdio.h>

int solution(int price, char grade);

void main()
{
    int price1=2500;
    char grade1="V";
    int ret1=solution(price1, grade1);

    printf("solution return value of the function is %d\n",ret1);

    int price2=96900;
    char grade2="S";
    int ret2=solution(price2, grade2);

    printf("solution return value of the function is %d",ret2);

    return 0;
}

int solution(int price, char grade)
{
    int answer=0;

    if(grade=="V")
    {
        answer=price*0.85;
    }
    else if(grade=="G")
    {
        answer=price*0.9;
    }
    else if(grade=="S")
    {
        answer=price*0.95;
    }

    return answer;
}
```
```c
#include <stdio.h>

int get_integer(void)
{
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    return n;
}

int is_prime(int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {

        if (n % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n;
    int i, j;
    int count = 0;

    n = get_integer();

    if (is_prime(n) == 1)
    {
        printf("%d은 소수입니다.\n", n);
    }
    else
    {
        printf("%d은 소수가 아닙니다.\n", n);
    }

    /*for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
            if (count == 2)
            {
                printf("%d", i);
                count = 0;
                break;
            }
        }
        
        printf(" ");
    }*/

    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
        }
    }

    return 0;
}
```
```c
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main(void)
{
    int i;
    srand((unsigned)time(NULL));

    for (i = 0; i < 6; i++)
    {
        printf("%d ", 1 + rand() % MAX);
    }

    return 0;
}
```
