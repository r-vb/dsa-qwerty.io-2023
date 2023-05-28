#include<stdio.h>
int main()
{
    int j,i,n;
    printf("Enter number of lines to print");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        for( j=0; j<n-i; j++)
        {
            if(j%2 ==0)
            {
                printf(" *");
            }
            else
                printf(" #");
        }
        printf("\n");
    }

    return 0;
}