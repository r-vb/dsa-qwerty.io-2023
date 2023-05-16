#include <stdio.h>

void ExtractIndex_of_Target()
{
    int arr[5] = {2,7,3,6,8}, i, j;
    int ext_index1, ext_index2, target = 9;
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (target == arr[i]+arr[j])
            {
                printf("The indices to achieve target are (%d,%d).\n",i,j);
            }   
        }   
    }
}

int main()
{
        ExtractIndex_of_Target();
return 0;
}