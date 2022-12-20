// separate odd and even integers in separate arrays.
#include <iostream>
using namespace std;
class ArrayOddEven
{
public:
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Even[10], Odd[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0, k = 0;
    void OddEven()
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                Even[j] = arr[i];
                j++;
            }
            else
            {
                Odd[k] = arr[i];
                k++;
            }
        } // end for loop
    }     // end OddEven()
    void FindEven()
    {
        for (int i = 0; i < j; i++)
        {
            cout << Even[i] << " ";
        }
        cout << endl;
    } // end Even()
    void FindOdd()
    {
        for (int i = 0; i < k; i++)
        {
            cout << Odd[i] << " ";
        }
    } // end Odd()
};    // end class

int main()
{
    ArrayOddEven obj;
    obj.OddEven();
    cout << "Even Elements are\n";
    obj.FindEven();
    cout << "Odd Elements are\n";
    obj.FindOdd();
}