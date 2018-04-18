#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size , prime_number , i , j , x;
    printf("Enter Size: ");
    scanf("%d" , &size);
    x = (size-2)/2;
    system("cls");
    printf("Prime Number from 0 to %d is\n" , size);
    int arr[size];
    for(i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
    for(i = 1; i < x; i++)
    {
        j = i;
        while(i+j+2*i*j <= x)
        {
            arr[i+j+2*i*j] = 1;
            j++;
        }
    }
    for(i = 1; i < x; i++)
    {
        if(arr[i] == 0)
        {
            prime_number = 2*i + 1;
            printf("%d \n" , prime_number);
        }
    }
    printf("\nThank You");
}
