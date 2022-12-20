#include <iostream>
#define SIZE 10
using namespace std;

void merge(int a[], int l, int middle, int c)
{
 int b[c+1];
 int i = l;
 int j = middle;
 int k = -1;
 while (i < middle && j <= c)
 {
		if (a[i] <= a[j])
		{
			k++;
			b[k] = a[i];
			i++;
		}
		else
		{
			k++;
			b[k] = a[j];
			j++;
		}
 }
 if (i >= middle)
 {
		while (j <= c)
		{
			k++;
			b[k] = a[j];
			j++;
		}
 }
 else
 {
		while (i < middle)
		{
			k++;
			b[k] = a[i];
			i++;
		}
 }
 int m;
 for (m = 0; m <= k; m++)
 {
		a[l+m] = b[m];
 }
}

void mergeSort(int a[], int l, int c)
{
 int middle;
 if (l < c)
 {
		middle = (l + c) / 2;
		mergeSort(a, l, middle);
		mergeSort(a, middle + 1, c);
		merge(a, l, middle+1, c);
 }
}

void display(int a[], int c)
{
 for (int i = 0; i < c; i++)
 {
		cout << a[i] << " ";
 }
}
int main()
{
 int a[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
 int c = sizeof(a) / sizeof(a[0]);
 int l = 0;
 mergeSort(a, l, c-1);

 display(a, c);
}
