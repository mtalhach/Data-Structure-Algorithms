// most occured number
#include <iostream>
using namespace std;

void most_occured(int arr[], int n)
{
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == max_count)
        {
            cout << arr[i];
        }
    }
}
int main()
{
    int array[] = {5, 6, 7, 8, 4, 6, 6, 4};
    int n = sizeof(array) / sizeof(array[0]);
    most_occured(array, n);
}