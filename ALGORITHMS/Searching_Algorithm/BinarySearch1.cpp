// Iterative implementation of Binary Search
#include <iostream>
using namespace std;
class sear
{
public:
    int arr[10] = {1, 3, 4, 6, 7, 8, 9, 12, 24, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num, middle, s = 0, l = n - 1;
    int search()
    {
        cout << "\nEnter The Number You want to search: ";
        cin >> num;
        while (s <= l)
        {
            middle = (s + l) / 2;
            if (arr[middle] == num)
            {
                return middle;
            }
            else if (arr[middle] > num)
            {
                l = middle - 1;
            }
            else
            {
                s = middle + 1;
            }

        } // end while loop
        return -1;
    } // end search()
};

int main()
{
    int i = 0;
    while (i != 3)
    {
        sear obj;
        int result = obj.search();
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