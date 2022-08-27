#include <stdio.h>

int main(void)
{
    int integer = 0;

    printf("Between an integer: ");
    scanf("%d", &integer);

    printf("\n");
    printf("Integer format in octal: %o\n", integer);
    printf("Integer format in hexadicimal: %X\n", integer);

    return 0;
}
