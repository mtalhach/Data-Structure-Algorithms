// sorting of Array
#include <iostream>
using namespace std;
class sortArray
{
public:
    int array[10] = {7, 66, 5, 4, 90, 34, 12, 1};
    int counter = 8;
    int temp;
    void sort()
    {
        for (int i = 0; i < counter; i++)
        {
            for (int j = i + 1; j < counter; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                } // end if condition
            }     // end inner for loop
        }         // end outer for loop
    }             // end sort()
    void display()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << array[i] << " ";
        }
    }
};

int main()
{
    sortArray obj;
    obj.sort();
    obj.display();
}
