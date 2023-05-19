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