#include <stdio.h>

int main(void)
{
    int days_before_salary;
    int salary;
    int obligations;
    int salary_after_obligations;

    printf("In how many days do you get your salary? "); scanf("%d", &days_before_salary);
    printf("How much is your salary? "); scanf("%d", &salary);
    printf("How much are your obligations? "); scanf("%d", &obligations);
    
    salary_after_obligations = salary - obligations;

    printf("To save money, you have to spend less than %d$ per days until the next salary.\n", salary_after_obligations / days_before_salary);
    
    return 0;
}
