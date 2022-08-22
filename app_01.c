#include <stdio.h>

int main(void)
{   
    /*
     * %d : nombre entier (int)
     * %f : nombre floattant (float)
     * %c : caractère (char)
     * %s : chaîne de caractères (texte)
     */
    float number = 124.23;
    int int_number = (int)number;
    const float PI = 3.14;

    printf("%f\n", number);
    printf("%d\n", int_number);
    printf("%.2f\n", PI);

    return 0;
}
