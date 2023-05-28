#include<stdio.h>
int main()
{
    int temp,n=5;
    int arr[5] = {3,1,2,4,0};

    for(int i=0; i<n-1; i++)
    {
        for( int j =0; j< n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                //swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("array after sorting: ");
    for(int i=0; i<=n-1; i++)
    {
        printf("%d  ",arr[i]);
    }

    return 0;
}


