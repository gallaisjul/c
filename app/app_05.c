#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 0;
    bool access_authorized = false;

    printf("How old are you? ");
    scanf("%d", &age);

    (age >= 18) ? printf("Welcome\n") : printf("Acces denied\n");
    (age >= 18) ? access_authorized = true : printf("Access denied\n");

    return 0;
}
