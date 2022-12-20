// Bubble sort By rafference O(n*n)
#include <iostream>
using namespace std;
class sort
{
public:
    int array[5] = {8, 5, 3, 9, 4};
    int n = sizeof(array) / sizeof(array[0]);
    int temp;
    bool swapped;

    void sor(int *x, int *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    void sorting()
    {
        for (int i = 0; i < n; i++)
        {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    sor(&array[j], &array[j + 1]);
                    swapped = true;
                } // end if
            }     // end inner for loop
            if (swapped == false)
            {
                break;
            }
        } // end outer for loop
    }     // end sorting()
    void display()
    {
        for (int k = 0; k < 5; k++)
        {
            cout << array[k] << "  ";
        }
    }
};

int main()
{
    sort obj;
    obj.sorting();
    obj.display();
}