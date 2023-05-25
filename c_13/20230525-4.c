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