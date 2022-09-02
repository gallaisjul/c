#include <stdio.h>

void main()
{
    int entry_01, entry_02;
    int quotient = 0;
    int bigger, smaller;
    int maintenance;

    printf("first entry :"); scanf("%d", &entry_01);
    printf("second entry :"); scanf("%d", &entry_02);

    if (entry_01 > entry_02)
    {
        bigger = entry_01; 
	smaller = entry_02;
	maintenance = bigger;
    }
    else
    {
        bigger = entry_02;
	smaller = entry_01;
	maintenance = entry_02;
    }

    while (bigger >= smaller)
    {
        quotient++;
	bigger -= smaller;
    }

    printf("Quotient of %d by %d = %d\n", maintenance, smaller, quotient);
    printf("Remains = %d\n", bigger);
}
