#include <stdio.h>
int main()
{
    int n = 5;
    int a[n];
    for (int z=0; z<n; z++) {
        scanf("%d",&a[z]);
    }
    int min;
    for(int i = 0; i < n - 1; i++) {
        min = i;
        for(int j = i + 1; j < n; j++) {
            if(a[min] > a[j]) {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++)  {
        printf(" %d", a[i]);
    }
    return 0;
}