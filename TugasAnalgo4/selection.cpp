#include <stdio.h>

swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

void selectionSort(int arr[], int n)
{
int i, j, min_idx;
for (i = 0; i < n - 1; i++)
{
min_idx = i;
for (j = i + 1; j < n; j++)
if (arr[j] < arr[min_idx])
min_idx = j;
swap(&arr[min_idx], &arr[i]);
}
}

void printArray(int arr[], int size)
{
int i;
for (i = 0; i < size; i++)
printf("%d ", arr[i]);
printf("\n");
}

int main()
{
int arr[] = {45,76,11,23,41};
int n = sizeof(arr) / sizeof(arr[0]);
printf("Masukkan Array \t\t: ");
printArray(arr, n);
selectionSort(arr, n);
printf("Array yang sudah di sort: ");
printArray(arr, n);
return 0;
}

