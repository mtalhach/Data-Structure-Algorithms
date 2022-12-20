// Improve Linear Search Worst-Case Complexity
//   O(n) to O(1)
#include <iostream>
using namespace std;
class sear
{
public:
    int arr[10] = {6, 14, 2, 16, 77, 8, 9, 12, 24, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int number, left = 0, right = n - 1;
    void search()
    {
        cout << "\nEnter The Number You want to search: ";
        cin >> number;
        while (left <= right)
        {
            if (arr[left] == number)
            {
                cout << "Number is found at Index: " << left << " at " << left + 1 << " Attemt";
                break;
            }
            if (arr[right] == number)
            {
                cout << "Number is found at Index: " << right << " at " << n - right << " Attemt";
                break;
            }
            else
            {
                cout << "Not Found in array at " << left + 1 << " attempt";
                break;
            }
            left++;
            right++;
        }
    }
};

int main()
{
    sear obj;
    obj.search();
}