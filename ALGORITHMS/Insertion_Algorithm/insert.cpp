#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int arraySize = 15;
class insert
{
private:
    int array[arraySize];
    int counter;
    bool isSorted;

public:
    insert()
    {
        counter = 5;
        inititalize();
    } // end constructor

    int getCounter()
    {
        return counter;
    } // end counter()

    void inititalize()
    {
        array[0] = 2;
        array[1] = 1;
        array[2] = 9;
        array[3] = 7;
        array[4] = 6;
    } // end inititalize()

    bool insertNumber(int num)
    {
        if (is_sorted(array, array + counter))
        {
            isSorted = true;
        }
        else
        {
            isSorted = false;
        } // end if(is_sorted(array, array + counter))

        if (isSorted)
        {
            if (num > array[counter - 1])
            {
                array[counter++] = num;
                return true;
            }
            else if (num == array[counter - 1])
            {
                cout << "Number Already Exist\n";
                return true;
            }
            else
            {
                char choice;
                cout << "This number will make array unsorted..Are you Sure?(y/n):\n";
                cin >> choice;
                if (choice == 'y' || choice == 'Y')
                {
                    array[counter++] = num;
                    return true;
                }
                else
                {
                    isSorted = false;
                    return false;
                }
            }
        } // end  if (isSorted)

        // else statement
        else
        {
            cout << "Array is not sorted\nPress 1: To sort Array\nPress 2:To insert value manually\n";
            int opt;
            cin >> opt;
            if (opt == 1)
            {
                array[counter++] = num;
                sort(array, array + counter);
            }
            if (opt == 2)
            {
                int position;
                cout << "Plz Enter The POsition You want to insert Value:  ";
                cin >> position;
                if (position > 0 && position <= counter)
                {
                    for (int i = counter; i > position - 1; i--)
                    {
                        array[i] = array[i - 1];
                    }
                    array[position - 1] = num;
                    counter++;
                }
                else
                {
                    cout << "position is out of size\n";
                }
            }
        } // end else
        return true;
    } // end insertNumber()

    void ViewAllNumbers()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    } // end ViewAllNumbers()

    int menu()
    {
        int opt = 1;
        int num;
        cout << "\nTo Perform Editor Operations Press: ";
        cout << "\n1: Insert Number. ";
        cout << "\n2: View All Numbers. ";
        cout << "\n0: Exit The Program. ";
        cout << "\nPlease Enter Your Choice: ";
        cin >> opt;

        if (opt == 1)
        {
            if (counter < arraySize)
            {
                cout << "\nPlease Enter Number to Insert in Array Editor.\n";
                cin >> num;
                if (insertNumber(num))
                {
                    cout << "\nCongratulaions! Number Inserted Successfully.\n";
                }
                else
                {
                    cout << "\nNumber not inserted; User Decission.\n";
                }
            }
            else
            {
                cout << "\nSorry! Number Not Inserted; Not Enough Space.\n";
            }
        }
        else if (opt == 2)
        {
            if (counter > 0)
            {
                cout << "\n Resultant Array Are :  ";
                ViewAllNumbers();
            }
            else
            {
                cout << "\nSorry! Array Editor is Empty.\n";
            }
        }
        else if (opt == 0)
        {
            cout << "Program Terminated.......";
            return 0;
        }
        else
        {
            cout << "Invalid Option, please try again.";
        }
        menu();
        return 0;
    } // end menu

}; // end class

int main()
{
    insert ArrayEditor;
    if (ArrayEditor.getCounter() < arraySize)
    {
        cout << "\n Welcome to Array Editor";
        cout << "\n************\n";
        ArrayEditor.menu();
    }
    else
    {
        cout << "Array size out of bound\n";
    }
    return 0;
}