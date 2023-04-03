#include <stdio.h>

int main()
{
    int price, input_money, money;

    printf("물건 값을 입력하시오 : ");
    scanf("%d",&price);

    printf("투입한 금액을 입력하시오 : ");
    scanf("%d",&input_money);

    printf("거스름돈은 다음과 같습니다.\n\n");

    money=input_money-price;
    
    printf("천원권 : %d장\n",money/1000);
    money=money%1000;
    
    printf("오백원 : %d개\n",money/500);
    money=money%500;
    
    printf("백원 : %d개\n",money/100);
    money=money%100;

    return 0;
}