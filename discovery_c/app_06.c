#include <stdio.h>

int main(void) {

    int i = 0;
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("#");
	i++;
    } 
    while(i < num);
    
    printf("%d", i);
    printf("%d", num);
    
    i = 0;

    while(i < num) {
        printf("#\n");
        i++;	
    }


    return 0;
}
