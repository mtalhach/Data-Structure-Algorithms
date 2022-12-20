// C++ Program to Find Transpose of a Matrix

#include <iostream>
using namespace std;
#define rows 10
#define columns 10
class Multiply2Matrix
{
public:
    int Matrix[rows][columns];
    int r1, c1;
    void initializeMatrixA(int r1, int c1)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "elements: [" << i << "][" << j << "]: ";
                cin >> Matrix[i][j];
            } // end inner for loop
        }     // end outer for loop
    }         // end initializeMatrixA(int r,int c)
    void display(int r1, int c1)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << Matrix[j][i] << "  ";
            } // end inner for loop
            cout << endl;
        } // end outer for loop
    }     // end Addition(int r1, int c1)

}; // end class

int main()
{
    while (true)
    {
        Multiply2Matrix obj;
        cout << "Enter The Number of rows of Matrix A: ";
        cin >> obj.r1;
        cout << "Enter The Number of column of Matrix A: ";
        cin >> obj.c1;
        cout << endl;
        if (obj.r1 > 0 && obj.c1 > 0)
        {
            if (obj.r1 < 10 && obj.c1 < 10)
            {
                if (obj.r1 == obj.c1)
                {
                    obj.initializeMatrixA(obj.r1, obj.c1);
                    obj.display(obj.r1, obj.c1);

                } // end if (obj.r1 == obj.c1)
                else
                {
                    cout << "Number of Rows and column are not same\n";
                }
            } // end if (obj.r1 < 10 && obj.c1 < 10)
        }     // end if (obj.r1 > 0 && obj.c1 > 0)
        else
        {
            cout << "Array size out of Bound\n";
        }
    }
}
