// Find and print all common elements in three sorted arrays of integers
#include <iostream>
using namespace std;
class commonInArr
{
public:
    int arr[15] = {1, 5, 7, 8, 9, 4, 5, 6, 2, 9, 1, 5, 9, 7, 2};
    int p1 = 5, p2 = 10, p3 = 15;
    void arr1()
    {
        for (int i = 0; i < p1; i++)
        {
            cout << arr[i] << " ";
        }
    } // arr1()
    void arr2()
    {
        for (int i = p1; i < p2; i++)
        {
            cout << arr[i] << " ";
        }
    } // arr2()
    void arr3()
    {
        for (int i = p2; i < p3; i++)
        {
            cout << arr[i] << " ";
        }
    } // arr3()
    void common()
    {
        int i = 0, j = p1, k = p2;
        while (i < p1 && j < p2 && k < p3)
        {
            if (arr[i] == arr[j] && arr[j] == arr[k] && arr[k] == arr[i])
            {
                cout << arr[i] << " ";
                i++;
                j++;
                k++;
            }
            else if (arr[i] < arr[j])
            {
                i++;
            }
            else if (arr[j] < arr[k])
            {
                j++;
            }
            else
            {
                k++;
            }
        } // end While loop
    }     // end common()
};

int main()
{
    commonInArr obj;
    cout << "\nFirst Array is: \n";
    obj.arr1();
    cout << "\nSecond Array is: \n";
    obj.arr2();
    cout << "\nThird Array is: \n";
    obj.arr3();
    cout << "\nCommon Elements in all arrays: \n";
    obj.common();
}