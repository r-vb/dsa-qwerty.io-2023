

#include<stdio.h>
int main()
{
    int temp,n=5;
    int arr[5] = {3,1,2,4,0};

    int i,j;
    for( i =0; i<n ; i++ )
    {
        j=i;
        while( j>0 && ( arr[j-1]>arr[j] ) )
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j = j-1;
        }
    }



    printf("array after sorting: ");
    for(int i=0; i<=n-1; i++)
    {
        printf("%d  ",arr[i]);
    }

    return 0;
}