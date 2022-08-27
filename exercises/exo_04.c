#include <stdio.h>

int main(void)
{
    int exchange, value_01, value_02;

    printf("First value :"); scanf("%d", &value_01);
    printf("Second value :"); scanf("%d", &value_02);
 
    exchange = value_01;
    value_01 = value_02;
    value_02 = exchange;


    printf("After exchange The first integer = %d, and The second = %d\n", value_01, value_02);

    return 0;    
}
