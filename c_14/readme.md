# 2023-06-01 14주차 C언어 수업
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[10001];
    int KOI = 0, IOI = 0;

    scanf("%s", arr);

    for (int i = 0; i < strlen(arr) - 2; i++)
    {
        if (arr[i] == 'K' && arr[i + 1] == 'O' && arr[i + 2] == 'I')
        {
            KOI += 1;
        }
        else if (arr[i] == 'I' && arr[i + 1] == 'O' && arr[i + 2] == 'I')
        {
            IOI += 1;
        }
    }

    printf("%d\n%d", KOI, IOI);

    return 0;
}
```
```c
#include <stdio.h>

int main(void)
{
    printf("AND : %08X\n", 0x9 & 0xA);
    printf("OR : %08X\n", 0x9 | 0xA);
    printf("XOR : %08X\n", 0x9 ^ 0xA);
    printf("NOT : %08X\n", ~0x9);
    printf("<< : %08X\n", 0x4 << 1);
    printf(">> : %08X\n", 0x4 >> 1);
    
    return 0;
}
```
