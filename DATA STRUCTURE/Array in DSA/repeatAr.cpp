// first repeating element in array
#include <iostream>
using namespace std;
class repeatAr
{
public:
    int arr[10] = {1, 2, 3, 2, 4, 5, 3, 1, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;
    void repeat()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    cout << arr[i];
                    flag++;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
};

int main()
{
    repeatAr obj;
    cout << "First Repeating in Array: ";
    obj.repeat();
}