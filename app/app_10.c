#include <stdio.h>

#define SIZE_ARRAY 10

void display_array(int *tab, int size);

int main(void)
{
    int array[SIZE_ARRAY] = {1, 2, 3, 99, 5, 6, 7, 8, 9, 10};

    display_array(array, SIZE_ARRAY);

    printf("\n");
    array[3] = 4;

    display_array(array, SIZE_ARRAY);
    printf("\n");

    return 0;
}

void display_array(int *tab, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
        printf("[%d] ", tab[i]);	    
}
