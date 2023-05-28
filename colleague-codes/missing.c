#include<stdio.h>
int main()
{
    int n=5;
    int arr[5] = { 1,4,3,5};

    int sum = n*(n+1) / 2 ;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum=arr_sum + arr[i];
    }

    printf("missing number is %d",sum-arr_sum);


    return 0;
}