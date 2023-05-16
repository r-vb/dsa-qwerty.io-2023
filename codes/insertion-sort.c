#include <math.h>
#include <stdio.h>

void InsertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void display(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
    int n = 5, arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
	InsertionSort(arr, n);
	display(arr, n);

	return 0;
}
