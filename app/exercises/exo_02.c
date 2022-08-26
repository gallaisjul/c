#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
    int mystery_number = 0, number_enter = 0;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    mystery_number = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {
        printf("What is the mystery number? ");
	scanf("%d", &number_enter);

	if (mystery_number > number_enter)
	    printf("It's more!\n");
	else if (mystery_number < number_enter)
	    printf("It's less!\n");
	else
	    printf("Bravo, you found the mystery number!\n");
    } while (mystery_number != number_enter);

    return 0;
}
