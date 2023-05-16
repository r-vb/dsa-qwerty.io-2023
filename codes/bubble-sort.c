#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void BubbleSort() {
    int arr[MAX];
    int i, j, temp;
    printf("Enter 5 elements: ");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d",&arr[i]);
    }
    i = 0;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX-i-1; i++)
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    i = 0;
    printf("After sorting: ");
    for (int j = 0; i < MAX; i++)
    {
        printf("%d",arr[j]);
    }
}

int main()
{
    BubbleSort();
return 0;
}

//not correct code
