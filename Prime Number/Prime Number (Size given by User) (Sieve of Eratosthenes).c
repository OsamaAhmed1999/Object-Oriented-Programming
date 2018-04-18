#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size , prime_number , i , j;
    printf("Enter Size: ");
    scanf("%d" , &size);
    system("cls");
    printf("Prime Number from 0 to %d is\n" , size);
    int arr[size];
    for(i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
    for(i = 2; i < size; i++)
    {
        if(arr[i] == 0)
        {
            prime_number = i;
            for(j = 2; j < size/2; j++)
            {
                if(prime_number*j <= size)
                {
                    arr[prime_number*j] = 1;
                }
            }
            printf("%d\n" , prime_number);
        }
    }
    ///Working
    /*for(i = 2; i < size; i++)
    {
        if(arr[i] == 0)
        {
            printf("%d\n" , i);
        }
    }*/
    printf("\nThank You");
}
