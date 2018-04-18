#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("If You want to Exit Press Space Bar\n");
    char arr[100];
    int i;
    for(i = 0; i <= 100; i++)
    {
        printf("Enter Character = ");
        arr[i] = getche();
        if(arr[i] == ' ')
        {
            break;
        }
        if(arr[i]%2 == 0)
        {
            printf("\nEven\n");
        }
        else
        {
            printf("\nOdd\n");
        }
    }
    system("cls");
    printf("Thank You");
}
