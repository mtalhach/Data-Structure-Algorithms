// Linear search O(n)
#include <iostream>
using namespace std;
class sear
{
public:
    int arr[10] = {1, 14, 2, 16, 77, 8, 9, 12, 24, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int number, i;
    int search()
    {
        cout << "\nEnter The Number You want to search: ";
        cin >> number;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == number)
            {
                return i;
            }
        }
        return -1;
    }
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
            cout << "Number is Not Present In Array\n";
        }
        else
        {
            cout << "Number is present at index: " << obj.i;
        }
        i++;
    }
}