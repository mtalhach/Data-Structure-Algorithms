// Insertion on Un-Sorted array O(1)
#include <iostream>
using namespace std;
class insert
{
public:
    int array[10] = {6, 7, 4, 3, 2, 9};
    int counter = 6;
    void insertion()
    {
        int value, position;
        cout << "Enter The Position you want to Insert Value: ";
        cin >> position;
        cout << "Enter The Value You Want to Insert: ";
        cin >> value;
        if (position > 0 && position <= 6)
        {
            array[counter] = array[position - 1];
            array[position - 1] = value;
            counter++;
        }
    }
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
    insert obj;
    obj.insertion();
    obj.display();
}