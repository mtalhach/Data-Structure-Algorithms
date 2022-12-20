// deletion (index) from sorted array O(n)

#include <iostream>
using namespace std;
const int arraySize = 15;
class del
{
private:
    int array[arraySize] = {1, 2, 3, 4, 5};
    int counter;

public:
    del()
    {
        counter = 5;
    } // end Constructor

    int getCounter()
    {
        return counter;
    } // end getCounter()
    bool DeleteNumber()
    {
        int index;
        cout << "Enter The Index you want to delete Number: ";
        cin >> index;
        for (int i = index; i < counter - 1; i++)
        {
            array[i] = array[i + 1];
        }
        counter--;
        return true;
    } // end DeleteNumber()

    void viewNumber()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << array[i] << "  ";
        }
        cout << endl;
    } // end view()
};

void menu(del obj)
{
    int opt = 1;
    while (opt != 0)
    {
        cout << "\nTo Perform Editor Operations Press: ";
        cout << "\n1: Delete Number. ";
        cout << "\n2: View All Numbers. ";
        cout << "\n0: For Exit. ";
        cout << "\nPlease Enter Your Choice: ";
        cin >> opt;
        if (opt == 1)
        {
            if (obj.getCounter() > 0)
            {
                if (obj.DeleteNumber())
                {
                    cout << "\n Congratulaions! Number Deleted Successfully. ";
                }
                else
                {
                    cout << "\nSorry! Number Not Found or Declined by user.\n";
                }
            }
            else
            {
                cout << "\nSorry! Array is Empty.\n";
            }
        }

        else if (opt == 2)
        {
            if (obj.getCounter() > 0)
            {
                cout << "\n Resultant Array Are :  ";
                obj.viewNumber();
            }
            else
            {
                cout << "\nSorry! Array is Empty.\n";
            }
        }
        else if (opt == 0)
        {
            cout << "Program Terminated.......";
        }
        else
        {
            cout << "Invalid Option, please try again.";
        }
    } // end while
}

int main()
{
    del obj;
    if (obj.getCounter() < arraySize)
    {
        cout << "\n Welcome to Array Deletion";
        cout << "\n************\n";
        menu(obj);
    }
    else
    {
        cout << "Array size out of bound\n";
    }
    return 0;
}