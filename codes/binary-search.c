#include <stdio.h>

int main()
{
    int hold, i, n = 10;
    int a[10] = {1,6,2,9,4,3,5,8,7,0};
    int key, flag=0;
    printf("Enter key element to search: ");
    scanf("%d",&key);

    int min, temp;
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

    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    while ()
    {
        /* code */
    }
    
return 0;
}
















#include <stdio.h>

int BS(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return -1;
}

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present"
							" in array")
				: printf("Element is present at "
							"index %d",
							result);
	return 0;
}

///not correct at all...