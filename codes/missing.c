#include <stdio.h>

int main()
{
        int i, j;
        int arr[5] = {1,2,4,5};
    j=0;
    for (i = 1; i <= 5; i++)
    {
            if (i != arr[j])
            {
                printf("%d is the missing number",i);
                break;
            }
    j++;    
    }
return 0;
}