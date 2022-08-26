#include <stdio.h>

/*
 * [Display of the product of two integers]
 */

int main(void)
{
    int value_01, value_02;

    printf("first value :"); scanf("%d", &value_01);
    printf("\n");

    printf("second value :"); scanf("%d", &value_02);
    printf("\n");

    printf("Product of %d and %d = %d", value_01, value_02,value_01 * value_02);
    printf("\n");

    return 0;
}
