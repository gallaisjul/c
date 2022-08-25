#include <stdio.h>

#define SIZE_ARRAY 10

int *create_array(void);
void display_array(int tab[], int size);

int main(void)
{
    int i;
    int *array = create_array();

    display_array(array, SIZE_ARRAY);
    printf("\n");

    return 0;
}

int *create_array(void)
{
    static int array_integer[10];
    int i;

    for(i = 0; i < 10; i++);
        array_integer[i] = i * 3;

    return array_integer;
}

void display_array(int tab[], int size)
{
    int j;

    for(j = 0; j < size; j++)
        printf("[%d] ", tab[j]);	    
}
