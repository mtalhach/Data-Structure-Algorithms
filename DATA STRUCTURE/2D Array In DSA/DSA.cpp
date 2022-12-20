#include <iostream>
using namespace std;
const int row = 15;    // size of rows in Matrix
const int column = 15; // size of column in matrix

void initializeMatrixA(int array[row][column], int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "element:-[" << i << "][" << j << "]: ";
            cin >> array[i][j]; // get Matrix B from user.
        }                       // end inner for loop
    }                           // end outer for loop
} // end initializeMatrix()

void initializeMatrixB(int array[row][column], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = c1; j < c1 + c2; j++)
        {
            cout << "element:-[" << i << "][" << j << "]: ";
            cin >> array[i][j]; // get Matrix B From User
        }                       // end inner for loop
    }                           // end outer for loop
} // end initializeMatrix()

bool isIdentity(int array[row][column], int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (i == j && array[i][j] != 1)
            {
                return false;
            }
            else if (i != j && array[i][j] != 0)
            {
                return false;
            }
        } // end outer for loop
    }     // end displayMatrix()
    return true;
} // end isIdentity()

void displayMatrix(int array[row][column], int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << array[i][j] << "  ";
        } // end inner for loop
        cout << endl;
    } // end outer for loop
} // end displayMatrix()

void Addition(int array[row][column], int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            array[i][j] = array[i][j] + array[i][j + c1];
        } // end inner for loop
    }     // end outer for loop
    displayMatrix(array, r1, c1);
} // end Addition()

void Multiplication(int array[row][column], int r1, int c1, int c2)
{
    int mul[10][10];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            mul[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                mul[i][j] += array[i][k] * array[k][j + c1];
            } // end k loop
        }     // end inner for loop
    }         // end outer for loop

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << mul[i][j] << "  ";
        } // end inner for loop
        cout << endl;
    } // end outer for loop
} // end Multiplication

bool isSymmetric(int array[row][column], int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (array[i][j] != array[j][i])
            {
                return false;
            }
        } // end inner for loop
    }     // end outer for loop
    return true;
} // end isSymmetry

int main()
{
    int array[row][column]; // Matrix 1
    int r1, r2, c1, c2;     // declaration of rows and column
    int opt = 1;
    cout << "\n\n-----------Welcome To The Matrix System-------------\n";
    while (opt != 0) // loop execute until opt!=0
    {
        cout << "\n\nPress 1:Is Matrix Inentity?\n";
        cout << "Press 2:Addition of Two Matrix\n";
        cout << "Press 3:Multiplication of Two Matrix\n";
        cout << "Press 4:Two Matrix Show Symmetry?\n";
        cout << "Press 0:Exit The Program\n\n";
        cin >> opt; // choice from user
        switch (opt)
        {
        case 1:
            cout << ">>>>>>>>Enter The Size Of Matrix\n";
            cout << "Rows In Martix:";
            cin >> r1; // get number of rows of Matrix A from User
            cout << "Column in Matrix:";
            cin >> c1; // get number of column of Matrix A from User
            cout << endl;

            // Now Apply some conditions on rows and column
            if (r1 > 0 && c1 > 0)
            {
                if (r1 < 10 && c1 < 10)
                {
                    if (r1 == c1)
                    {
                        initializeMatrixA(array, r1, c1); // function call
                        displayMatrix(array, r1, c1);     // function call
                        if (isIdentity(array, r1, c1))    // function call and check condition
                        {
                            cout << "\nYes, The Given Matrix is Identity\n";
                        }
                        else
                        {
                            cout << "\nNo, The Given Matrix Is not Identity\n";
                        }
                    } // end if(r1==c1)
                    else
                    {
                        cout << "Number of Rows and columns are not same.\n";
                    }
                } // end if(r1<25&&c1<<25)
                else
                {
                    cout << "Matrix Size is out of bound\n";
                }
            } // end if(r1>0&&c1&&0)
            else
            {
                cout << "Matrix index is not in negative or zero so, Enter The right Matrix\n";
            }
            break;
        case 2:
            cout << ">>>>>>>>>Enter The Size Of Matrix\n\n";
            cout << "Rows in a Matrix A:";
            cin >> r1; // get number of rows of Matrix A from user
            cout << "columns in a Matrix A:";
            cin >> c1; // get number of colums of Matrix A from user
            cout << endl;
            cout << "Rows in a Matrix B:";
            cin >> r2; // get number of rows of Matrix B from user
            cout << "columns in a Matrix B:";
            cin >> c2; // get number of column of Matrix B from user
            cout << endl;
            // Applying some conditions on rows and columns
            if (r1 > 0 && c1 > 0 && r2 > 0 && c2 > 0)
            {
                if (r1 < 10 && c1 < 10 && r2 < 10 && c2 < 10)
                {
                    if (r1 == c1 && r2 == c2)
                    {
                        if (r1 == r2 && c1 == c2)
                        {
                            initializeMatrixA(array, r1, c1); // function call
                            cout << endl;
                            initializeMatrixB(array, r1, c1, r2, c2); // function call
                            Addition(array, r1, c1);                  // function call
                        }                                             // end if (r1 == r2 && c1 == c2)
                        else
                        {
                            cout << "\nThe Size of Both Matrix are Different.......\n";
                        }
                    } // end if (r1 == c1 && r2 == c2)
                    else
                    {
                        cout << "\nOrder of the Matrix is not Same.......\n";
                    }

                } // end if (r1 < 10 && c1 < 10 && r2 < 10 && c2 < 10)
            }     // end if (r1 > 0 && c1 > 0 && r2 > 0 && c2 > 0)
            else
            {
                cout << "\nThe indexes you have enter does not Exists in the matrix\n";
            }
            break;
        case 3:
            cout << ">>>>>>>>>Enter The Size Of Matrix\n\n";
            cout << "Rows in a Matrix A:";
            cin >> r1; // get number of rows of Matrix A from user
            cout << "columns in a Matrix A:";
            cin >> c1; // get number of column of Matrix A from user
            cout << endl;
            cout << "Rows in a Matrix B:";
            cin >> r2; // get number of rows of Matrix B from user
            cout << "columns in a Matrix B:";
            cin >> c2; // get number of column of Matrix B from user
            cout << endl;
            // Applying some conditions on rows and columns
            if (r1 > 0 && c1 > 0 && r2 > 0 && c2 > 0)
            {
                if (r1 < 10 && c1 < 10 && r2 < 10 && c2 < 10)
                {
                    if (r1 == c1 && r2 == c2)
                    {
                        if (r1 == r2 && c1 == c2)
                        {
                            initializeMatrixA(array, r1, c1); // function call
                            cout << endl;
                            initializeMatrixB(array, r1, c1, r2, c2); // function call
                            Multiplication(array, r1, c1, c2);        // function call
                        }                                             // end if (r1 == r2 && c1 == c2)
                        else
                        {
                            cout << "\nThe Size of Both Matrix are Different.......\n";
                        }
                    } // end if (r1 == c1 && r2 == c2)
                    else
                    {
                        cout << "\nOrder of the Matrix is not Same.......\n";
                    }

                } // if (r1 < 10 && c1 < 10 && r2 < 10 && c2 < 10)
            }     // if (r1 > 0 && c1 > 0 && r2 > 0 && c2 > 0)
            else
            {
                cout << "\nThe indexes you have enter does not Exists in the matrix\n";
            }
            break;
        case 4:
            cout << ">>>>>>>>>Enter The Size Of Matrix\n\n";
            cout << "Rows in a Matrix:";
            cin >> r1; // get number of rows of Matrix A from user
            cout << "columns in a Matrix:";
            cin >> c1; // get number of column of Matrix A from user
            cout << endl;
            if (r1 > 0 && c1 > 0)
            {
                if (r1 < 10 && c1 < 10)
                {
                    if (r1 == c1)
                    {
                        initializeMatrixA(array, r1, c1); // function call
                        displayMatrix(array, r1, c1);     // function call
                        if (isSymmetric(array, r1, c1))   // function call and check condition
                        {
                            cout << "\nYes, The Given Matrix are Symmetric\n";
                        }
                        else
                        {
                            cout << "\nNo, The Given Matrix are not Symmetric\n";
                        }
                    } // end if (r1 == c1)
                    else
                    {
                        cout << "\nOrder of the Matrix is not Same.......\n";
                    }

                } // if (r1 < 10 && c1 < 10)
            }     // if (r1 > 0 && c1 > 0)
            else
            {
                cout << "\nThe indexes you have enter does not Exists in the matrix\n";
            }
            break;
        case 0:
            exit(0);
            break;

        default:
            cout << "Please press The right Option\n";
            break;
        }

    } // end while

} // end main()