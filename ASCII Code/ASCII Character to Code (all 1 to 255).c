#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    int i = 1;
    while(i < 255)
    {
        printf("ASCII at %c = %d\n", i , i);
        i++;
    }
    printf("\nThank You");
}
