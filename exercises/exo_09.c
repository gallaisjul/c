#include <stdio.h>

int main(void)
{
    int divisor = 1;
    int entry;

    printf("Entry :"); scanf("%d", &entry);

    do
    {
        if (entry % divisor == 0)
	{
            printf("%d is a divisor of %d\n", divisor, entry);
	}
	divisor++;
    } while(divisor <= entry);
    
    return 0;
}
