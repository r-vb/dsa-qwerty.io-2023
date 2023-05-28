#include<stdio.h>
int main()
{
    int temp,n=5;
    int arr[5] = {3,1,2,4,0};


    int min,i,j;

    for( i=0; i< n-1 ; i++ )
    {
        min = i;
        for( j=i+1; j<n; j++ )
        {
            if ( arr[j] < arr[min] )
            {
                min = j;
            }
        }

        if( min != i)
        {
            //swap
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    printf("array after sorting: ");
    for(int i=0; i<=n-1; i++)
    {
        printf("%d  ",arr[i]);
    }

    return 0;
}

