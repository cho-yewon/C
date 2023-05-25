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