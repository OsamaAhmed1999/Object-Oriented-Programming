#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    int i = 1;
    while(i < 255)
    {
        printf("Character at %d = %c\n", i , i);
        i++;
    }
    printf("\nThank You");
}
