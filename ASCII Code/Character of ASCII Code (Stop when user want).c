#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(">>For Exit Please Press 1 or 2 Times: [Enter]\n");
    printf(">>ASCII Code must be is Greater then zero but Less then 256\n\n");
    int code;
    int i=0;
    while(i < 2)
    {
        printf("Enter Code = ");
        scanf("%d",&code);
        if(code > 0 || code < 256)
        {
            printf("Character = %c\n\n", code);
            if(code == 13)
            {
                i++;
            }
        }
    }
    printf("\nThank You");
}
