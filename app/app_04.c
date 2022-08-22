#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int salary_per_month = 0;	
    int age = 0;
    bool credit_agreement = false;

    printf("How much do you have in your account? ");
    scanf("%d", &salary_per_month);
    printf("\n");
    printf("How old are you? ");
    scanf("%d", &age);
    printf("\n");

    if (salary_per_month > 1500 && age >= 18)
    {
        credit_agreement = true;
	printf("We grant you $%d.\n", salary_per_month * 2);
    }
    else if (salary_per_month > 1000 && age >= 18)
    {
        printf("We can credit your accont with 100.\n");
    }
    else
    {
        printf("We can't give you credit. Sorry\n");
    }

    return 0;
}
