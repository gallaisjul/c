#include <stdio.h>

int main(void)
{
    int i;
    char letter[52] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for(i = 0; i < 52; i++)
    {
	int letterAscii = (int)letter[i]; 
        printf("Letter :%c Code ASCII :%d\n",letter[i], letterAscii);
    }

    return 0;
}
