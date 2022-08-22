#include <stdio.h>

int main(void)
{
    int age_user = 0;

    printf("How old are you? ");
    scanf("%d", &age_user);

    printf("You are %d years old!\n", age_user);
    return 0;
}
