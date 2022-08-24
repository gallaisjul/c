#include <stdio.h>

/*
 *  Pointeur : variable contenant l'adresse d'une autre variable
 */

int inverse_number(int num_a, int num_b)
{
    int temporary = 0;

    temporary = num_b;
    num_b = num_a;
    num_a = temporary;

    return num_a;
}

int main(void)
{
    int num_a = 10;
    int num_b = 30;

    printf("Address num_a : %p\n", &num_a);
    printf("Address num_b : %p\n", &num_b);

    printf("Before : num_a = %d and num_b = %d\n", num_a, num_b);
    num_a = inverse_number(num_a, num_b);
    printf("After : num_a = %d and num_b = %d\n", num_a, num_b);

    return 0;
}
