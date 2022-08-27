#include <stdio.h>

int main(void)
{
    int entry_01, entry_02, entry_03;

    printf("Entry 1:"); scanf("%d", &entry_01);
    printf("Entry 2:"); scanf("%d", &entry_02);
    printf("Entry 3:"); scanf("%d", &entry_03);

    if (entry_01 > entry_02 && entry_01 > entry_03)
    {
        printf("Highest entered value :%d\n", entry_01);
    }
    else if (entry_02 > entry_01 && entry_02 > entry_03)
    {
        printf("Highest entered value :%d\n", entry_02);
    }
    else if (entry_03 > entry_01 && entry_03 > entry_02)
    {
        printf("Highest entered value :%d\n", entry_03);
    }
    else
    {
        printf("The highest values are egual\n");
    }

    return 0;
}
