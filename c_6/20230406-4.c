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