# 2023-05-25 13주차 C언어 수업
```c
#include <stdio.h>

void main()
{
    int a = 150, b = 266, c = 427, sum = 0, count = 0;
    int t[10] = {0, };
    // scanf("%d %d %d",&a,&b,&c);
    sum = a * b * c;

    while (1)
    {
        count = sum % 10;
        t[count] += 1;
        sum = sum / 10;

        if (sum <= 0)
        {
            break;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", t[i]);
    }
}
```
```c
#include <stdio.h>

int main()
{
    int i = 10;
    char c = 69;
    float f = 12.3;

    printf("i의 주소 : %p\n", &i);
    printf("c의 주소 : %p\n", &c);
    printf("f의 주소 : %p\n", &f);

    return 0;
}
```
```c
#include <stdio.h>

int main()
{
    int i = 10;
    double f = 12.3;
    int *pi = NULL;

    double *pf = NULL;
    pi = &i;
    pf = &f;

    printf("%p %p\n", pi, &i);
    printf("%p %p\n", pf, &f);

    return 0;
}
```
```c
#include <stdio.h>

int main()
{
    int i=10;
    int* p;

    p=&i;
    printf("%d\n",*p);

    *p=5;
    printf("%d\n",i);
}
```
```c
#include <stdio.h>

int main()
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf("pc=%u, pc+1=%u, pc+2=%u\n", pc, pc + 1, pc + 2);
    printf("pc=%u, pc+1=%u, pc+2=%u\n", pi, pi + 1, pi + 2);
    printf("pc=%u, pc+1=%u, pc+2=%u\n", pd, pd + 1, pd + 2);
}
```
```c
#include <stdio.h>

int main()
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);

    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi);

    *pi++;
    printf("i = %d, pi = %p\n", i, pi);

    return 0;
}
```
