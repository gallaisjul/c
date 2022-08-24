#include <stdio.h>

/*
 *  Pointeur : variable contenant l'adresse d'une autre variable
 *  %d -> affiche une adresse de variable ou de pointeur 
 *
 *  [VARIABLES]
 *      maVariable  : valeur de la variable
 *      &maVariable : adresse de la variable 
 *
 *  [POINTEURS]
 *      monPointeur  : adresse de la variable
 *      *monPointeur : valeur de la variable pointée
 *      &monPointeur : adresse du pointeur 
 */

void inverse_number(int *num_a,int *num_b)
{
    int temporary = 0;//B

    temporary = *num_b;
    *num_b = *num_a;
    *num_a = temporary;
}

int main(void)
{
    int num_a = 10;
    int num_b = 30;

    printf("Before : num_a = %d and num_b = %d\n", num_a, num_b);
    inverse_number(&num_a, &num_b);
    printf("After : num_a = %d and num_b = %d\n", num_a, num_b);

    return 0;
}
