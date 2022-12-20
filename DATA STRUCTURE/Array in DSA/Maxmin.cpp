// C++ Program to Find Largest & Smallest Element of an Array
#include <iostream>
using namespace std;
class MAxMin
{
public:
    int array[15];
    int max = array[0];
    int min = array[0];
    void FindMax(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> array[i]; // get array from user
        }
        for (int i = 1; i < n; i++)
        {
            if (max < array[i])
            {
                max = array[i];
            } // end if condition
        }     // end for loop
        cout << "Max Term is: " << max << endl;
    } // end FindMax(int n)
    void FindMin(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> array[i]; // get array from user
        }
        for (int i = 1; i < n; i++)
        {
            if (min > array[i])
            {
                min = array[i];
            } // end if condition
        }     // end for loop
        cout << "Min Term is: " << min << endl;
    } // end FindMin(int n)
};    // end class
int main()
{
    MAxMin obj;
    int opt = 1;
    while (opt != 0)
    {
        cout << "Press 1:To Find Max\n";
        cout << "Press 2:To Find Min\n";
        cout << "Press 0:To Exit\n";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter The Number You Want to Insert In Array: ";
            int num;
            cin >> num;
            if (num > 0 && num < 15)
            {
                obj.FindMax(num);
            }
            else
            {
                cout << "Array Size is out of Bound\n";
            }
            break;
        case 2:
            cout << "Enter The Number You Want to Insert In Array: ";
            int num1;
            cin >> num1;
            if (num1 > 0 && num1 < 15)
            {
                obj.FindMin(num1);
            }
            else
            {
                cout << "Array Size is out of Bound\n";
            }
            break;
        case 0:
            exit(0);

        default:
            cout << "Plz Enter The Right Command\n";
            break;
        } // end switch
    }     // end while loop
} // end main()
