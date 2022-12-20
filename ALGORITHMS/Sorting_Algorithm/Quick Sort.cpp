#include <bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1); 
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	cout << arr[i] << "   ";
}

int main()
{
	int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	int low=0;
	quickSort(arr, low, n - 1);
	cout << "Sorted array is: \n";
	display(arr, n);
	return 0;
}

