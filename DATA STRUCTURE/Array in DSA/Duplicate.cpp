// Find The number of Duplicate Element
#include <iostream>
using namespace std;
class Duplicate
{
public:
    int array[10] = {1, 2, 2, 4, 5, 3, 3, 7};
    int counter = 8;
    int count;
    void FindDuplicate()
    {
        for (int i = 0; i < counter; i++)
        {
            for (int j = i + 1; j < counter; j++)
            {
                if (array[i] == array[j])
                {
                    count++;
                }
            } // end inner for
        }     // end outer for
        cout << "Total Number Of Duplicate Elements: " << count << endl;
    } // end FindDuplicate()
};    // end class

int main()
{
    Duplicate obj;
    obj.FindDuplicate();
}