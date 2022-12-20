// find the most occuring element
#include <iostream>
using namespace std;
class freq
{
public:
    int arr[10] = {1, 2, 3, 2, 4, 5, 3, 1, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int counter = 0, frequency;
    int Findfrequency()
    {
        cout << "Enter The Number You Want to find occurance: ";
        cin >> frequency;
        for (int i = 0; i < n; i++)
        {
            if (frequency == arr[i])
            {
                counter++;
            }
        }
        return counter;
    }
};

int main()
{
    freq obj;
    cout << obj.Findfrequency();
}