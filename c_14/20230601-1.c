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