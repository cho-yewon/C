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