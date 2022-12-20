// Find the smallest element missing in a sorted array

#include <iostream>
using namespace std;
int missing(int arr[], int start, int end)
{
    if (start > end)
    {
        return end + 1;
    }
    if (start != arr[0])
    {
        return start;
    }
    int middle = (start + end) / 2;
    if (arr[middle] == middle)
    {
        return missing(arr, middle + 1, end);
    }
    return missing(arr, start, middle);
}
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int start = 0, end = n - 1;
    cout << "The Missing Element is: " << missing(array, start, end);
}