// find the K largest element
#include <bits/stdc++.h>
using namespace std;
void max(int arr[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[] = {1, 2, 10, 22, 34, 56, 78, 65, 43};
    int k;
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, array + size, greater<int>());
    cout << "Enter The value of K for largest values: ";
    cin >> k;
    max(array, k);
}