#include <stdio.h>

int main()
{
    int T, A, B;

    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf("%d %d", &A, &B);
        if(((0<A)&&(A<10))&&((0<B)&&(B<10)))
        {
            printf("Case #%d : %d + %d = %d\n",i, A, B, A+B);
        }
        else
        {
            printf("다시 입력하세요(0<A,B<10)\n");
            i--;
        }
    }
    return 0;
}