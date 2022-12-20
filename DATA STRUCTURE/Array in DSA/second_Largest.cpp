// 2nd Largest In Array
#include <bits/stdc++.h>
using namespace std;
void max(int arr[], int k)
{
    cout << arr[1];
}
int main()
{
    int array[] = {1, 2, 10, 22, 34, 56, 78, 65, 43};
    int k;
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, array + size, greater<int>());
    cout << "The Second Largest Element is: ";
    max(array, 1);
}