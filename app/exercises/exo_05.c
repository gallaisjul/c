#include <stdio.h>

int main(void)
{
    int i;
    char letter[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for(i = 0; i < 26; i++)
    {
	int letterAscii = (int)letter[i]; 
        printf("Letter :%c Code ASCII :%d\n",letter[i], letterAscii);
    }

    return 0;
}
