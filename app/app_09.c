#include <stdio.h>

/*
 * [Declaration table]
 */

int main(void)
{
    int array[5] = {0};
    int i;

    for(i = 0; i < 5; i++)
    {	    
        printf("[%d] ", array[i]);
    }

    return 0;
}
