#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
    int size;
    printf("Enter size of Array : ");
    scanf("%d",&size);
	int arr[size];
	printf("Enter the Elements of Array \n");
	for(int i=0;i<size;i++){
	    scanf("%d",&arr[i]);
	}
	printf("Initial Array : \n");
	printArray(arr, size);
	selectionSort(arr, size);
	printf("After Sort The Array : \n");
	printArray(arr, size);
	return 0;
}
