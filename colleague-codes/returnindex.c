#include<stdio.h>
int main()
{
    int num[4]={2,7,11,15},target=13;
    
    // printf("size of array: ");
    // scanf("%d",&n);

    // printf("enter array elements: ");
    // for(int i=0 ; i<n ; i++)
    // {
    //     scanf("%d",&num);
    // }
    // printf("enter target: ");
    // scanf("%d",&target);

    int i,j,sum;
    for( i = 0; i< 4; i++ )
    {
        for( j=i; i< 4; j++ )
        {
            if(num[i] + num[j] == target)
            {
                printf("index: %d,%d",i,j);
            }
        }
    }

    return 0;
}