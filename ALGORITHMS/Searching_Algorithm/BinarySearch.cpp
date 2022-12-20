// Recursive implementation of Binary Search:
#include <iostream>
using namespace std;

int search(int arr[], int number, int start, int last)
{
    int middle;
    if (last >= start)
    {
        middle = (start + last) / 2;
        if (arr[middle] == number)
        {
            return middle;
        }
        else if (arr[middle] > number)
        {
            return search(arr, number, start, middle - 1);
        }
        else
        {
            return search(arr, number, middle + 1, last);
        }

    } // if (last >= start)
    return -1;
}
int main()
{
    int i = 0;
    while (i != 3)
    {
        int arr[] = {1, 3, 4, 6, 7, 8, 9, 12, 24, 30};
        int n = sizeof(arr) / sizeof(arr[0]);
        int number, start = 0, last = n - 1;
        cout << "\nEnter The Number You want to search: ";
        cin >> number;
        int result = search(arr, number, start, last);
        if (result == -1)
        {
            cout << "Number is not found in array\n";
        }
        else
        {
            cout << "Number is found at index: " << result;
        }
        i++;
    }
}