#include <iostream>
using namespace std;
const int arraySize = 15;
class Edit
{
private:
    int array[arraySize] = {3, 2, 8, 7, 4};
    int counter;

public:
    Edit()
    {
        counter = 5;
    } // end Constructor

    int getCounter()
    {
        return counter;
    } // end getCounter()
    bool EditNumber()
    {
        int middle, number, numberWith;
        cout << "Enter The Number to replace: ";
        cin >> number;
        cout << "Enter The Number With Replace: ";
        cin >> numberWith;
        for (int i = 0; i < counter; i++)
        {
            if (array[i] == number)
            {
                array[i] = numberWith;
            }
        } // end for loop
        return true;
    } // end EditNumber()

    void viewNumber()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << array[i] << "  ";
        }
        cout << endl;
    } // end view()
};

void menu(Edit obj)
{
    int opt = 1;
    while (opt != 0)
    {
        cout << "\nTo Perform Editor Operations Press: ";
        cout << "\n1: Edit Number. ";
        cout << "\n2: View All Numbers. ";
        cout << "\n0: For Exit. ";
        cout << "\nPlease Enter Your Choice: ";
        cin >> opt;
        if (opt == 1)
        {
            if (obj.getCounter() > 0)
            {
                if (obj.EditNumber())
                {
                    cout << "\n Congratulaions! Number Replaced Successfully. ";
                }
                else
                {
                    cout << "\nSorry! Number Not Found or Declined by user.\n";
                }
            }
            else
            {
                cout << "\nSorry! Array Editor is Empty.\n";
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
                cout << "\nSorry! Array Editor is Empty.\n";
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
    Edit obj;
    if (obj.getCounter() < arraySize)
    {
        cout << "\n Welcome to Array Editor";
        cout << "\n************\n";
        menu(obj);
    }
    else
    {
        cout << "Array size out of bound\n";
    }
    return 0;
}