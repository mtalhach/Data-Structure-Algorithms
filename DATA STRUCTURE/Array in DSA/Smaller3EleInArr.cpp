#include <iostream>
using namespace std;
class Smaller3EleInArr
{
public:
    int arr[10];
    int size;
    void larger()
    {
        int first, second, third;
        first = second = third = INT_MAX;
        for (int i = 0; i < size; i++)
        {
            cout << "element: [" << i + 1 << "]: ";
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (first > arr[i])
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if (second > arr[i])
            {
                third = second;
                second = arr[i];
            }
            else
            {
                third = arr[i];
            }
        } // end for loop
        cout << "First: " << first << "   Second: " << second << "  Third: " << third;

    } // end larger()
};

int main()
{
    Smaller3EleInArr obj;
    cout << "Enter The size of Array: ";
    cin >> obj.size;
    if (obj.size > 0 && obj.size < 10)
    {
        obj.larger();
    }
}