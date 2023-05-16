#include <stdio.h>

void MissingNumber()
{
        int n=5, arr[5] = {1,3,4,5};
        int sum = n*(n+1)/2;
        int arr_sum=0;
    for (int i = 0; i < n; i++)
    {
        arr_sum = arr_sum + arr[i];
    }
    printf("Missing number is %d.",(sum - arr_sum));
}

int main()
{
        MissingNumber();
return 0;
}