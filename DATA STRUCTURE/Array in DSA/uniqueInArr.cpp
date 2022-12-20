// Find and print all unique elements of a given array of integers
#include <iostream>
using namespace std;

class uniqueInArr
{
public:
    int array[10] = {1, 2, 3, 4, 3, 2, 5, 6, 5, 4};
    int n = sizeof(array) / sizeof(array[0]);
    void unique()
    {
        for (int i = 0; i < n; i++)
        {
            int j;
            for (j = 0; j < i; j++)

                if (array[i] == array[j])
                {
                    break;
                }
            if (i == j)
            {
                cout << array[i] << " ";
            }
        }
    }
    void uniqueEle()
    {
        for (int i = 0; i < n; i++)
        {
            int j;
            for (j = 0; j < i; j++)

                if (array[i] == array[j])
                {
                    cout << "Unique Elements: " << array[i] << endl;
                }
        }
    }
};

int main()
{
    uniqueInArr obj;
    obj.unique();
    cout << endl
         << endl;
    obj.uniqueEle();
}