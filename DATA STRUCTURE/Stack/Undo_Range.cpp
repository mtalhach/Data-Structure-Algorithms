#include <bits/stdc++.h>
using namespace std;
struct s
{
    int value;
    int index;
};
class editor
{
private:
    int array[10];
    int counter;
    int top;

public:
    stack<s> stk;
    editor()
    {
        array[0] = 2;
        array[1] = 1;
        array[2] = 9;
        array[3] = 7;
        array[4] = 6;
        counter = 5;
        top = -1;
    }

    bool delRange()
    {
        s val;
        int sRange, eRange, index;
        cout << "Enter The Deleting Range\n";
        cout << "Enter The Starting Range:";
        cin >> sRange;
        cout << "Enter The Ending Range:";
        cin >> eRange;
        

        for (int i = sRange; i <= eRange; i++)
        {
            index = i;
            val.index = index;
            val.value = array[index];
            stk.push(val);
        }
        if (eRange < counter)
        {
            for (int i = sRange; i <= eRange; i++)
            {
                for (int j = sRange; j < counter; j++)
                {
                    array[j] = array[j + 1];
                }
                counter--;
            }
            return true;
        }
        else
        {
            cout << "Last Range is out of bound\n";
        }
        return false;
    } // delRange()

    bool Undel()
    {
       
            for (int i = counter; i >= stk.top().index; i--)
            {
                array[i+1] = array[i];
            }
            counter++;
            array[stk.top().index] = stk.top().value;
            return true;
    }

    void ViewAllNumbers()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    } // end ViewAllNumbers()
};

int main()
{
    editor ed;
    int opt;
    while (true)
    {
        int opt;
        cout << "Press 1:For delete:\n";
        cout << "Press 2:For Undel:\n";
        cout << "Press 3:For View:\n";
        cin >> opt;
        if (opt == 1)
        {
            if (ed.delRange())
            {
                cout << "Number delete Successfully\n";
            }
            else
            {
                cout << "no number found for delete\n";
            }
        }
        if (opt == 2)
        {
            if (ed.Undel())
            {
                cout << "Number Undelete Successfully\n";
            }
            else
            {
                cout << "no number found for Undelete\n";
            }
        }
        else if (opt == 3)
        {
            ed.ViewAllNumbers();
        }
    }
}
