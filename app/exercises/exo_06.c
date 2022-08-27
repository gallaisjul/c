#include <stdio.h>

int main(void)
{
    int value;

    printf("Value :"); scanf("%d", &value);

    if (value % 2 == 0)
    {
        printf("The number is pair\n");
    }
    else
    {
        printf("The number is impair\n");
    }

    return 0;
}
