// sort array
#include <bits/stdc++.h>
using namespace std;
class sortArr
{
public:
    int arr[10] = {6, 7, 5, 8, 5, 4, 3, 2, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    void AscendingSort()
    {
        cout << "Ascending Sort: ";
        sort(arr, arr + size);
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
    void decendingSort()
    {
        cout << "\nAscending Sort: ";
        sort(arr, arr + size, greater<int>());
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    sortArr obj;
    obj.AscendingSort();
    obj.decendingSort();
}