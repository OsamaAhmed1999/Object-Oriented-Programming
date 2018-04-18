#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int start = 0;
    int end = 9;
    int num , mid , i=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==num)
        {
            printf("Number Found at Index: %d",mid);
            i++;
            break;
        }
        else if(arr[mid]<num)
        {
            start=mid+1;
            mid=(start+end)/2;
        }
        else
        {
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    if(i==0)
    {
        printf("Number Not Found");
    }
}
