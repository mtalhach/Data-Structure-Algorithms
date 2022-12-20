// Insertion on Sorted array O(n)
#include <iostream>
using namespace std;
class insert
{
public:
    int array[10] = {1, 2, 3, 5, 6, 7};
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
            for (int i = counter; i >= position; i--)
            {
                array[i] = array[i - 1];
            }
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