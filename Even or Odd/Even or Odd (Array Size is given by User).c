#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size;
   printf("Enter the Size of Array = ");
   scanf("%d",&size);
   int arr[size];
   int i;
   for(i=0; i<size; i++)
   {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
   }
}
