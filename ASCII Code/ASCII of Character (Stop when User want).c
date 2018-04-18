#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("For Exit Please Press 1 or 2 Times: [Enter]\n\n");
    char character;
    int i=0;
    while(i<2)
    {
        printf("Enter Character = ");
        character = getche();
        printf("\nASCII = %d\n", character);
        if(character == 13)
        {
            i++;
        }
    }
    printf("\nThank You");
}
