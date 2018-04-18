#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20]={5,5,3,4,8,0,1,2,8,9,0,0,8,6};
    int i , count=0;
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    for(i = 0; i <= 20; i++)
    {
        if(arr[i]==num)
        {
            printf("Number Found at Index: %d\n",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("Number Not Found");
    }
}
