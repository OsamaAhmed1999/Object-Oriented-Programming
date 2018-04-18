#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Size: ");
    int size , i , num;
    scanf("%d" , &size);
    int arr[size];
    char another = 'y';
    printf("Enter Different Numbers\n");
    for(i = 1; i <= size; i++)
    {
        printf("(%d) " , i);
        scanf("%d" , &arr[i]);
    }
    system("cls");

    while((another == 'y') || (another == 'Y') )
    {
        int count=0;
        printf("Enter Number that You want to Search: ");
        scanf("%d",&num);
        for(i = 1; i <= size; i++)
        {
            if(arr[i]==num)
            {
                printf("Number Found at Index: %d\n",i);
                count++;
            }
        }
        if(count == 0)
        {
            printf("Number Not Found\n");
        }
        printf("\nDo you want to Search any other Number (Y/N): ");
        another = getch();
        system("cls");
        if((another != 'y') || (another != 'Y'))
        {
            printf("Thank You");
        }
    }
}
