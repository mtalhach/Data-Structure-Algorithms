// Emulating a 2-d array using 1-d array
#include <iostream>
using namespace std;
#define row 3
#define column 3
#define Max_Size 20
class Array2D
{
public:
    int Matrix[row][column] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int array[Max_Size];
    int k = 0;
    void plot()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                k = j + (i * column);
                array[k] = Matrix[i][j];
                k++;
            } // end inner for loop
        }     // end outer for loop
    }         // end plot()
    void display()
    {
        for (int i = 0; i < k; i++)
        {
            cout << array[i] << " ";
        }
    } // end display()
};

int main()
{
    Array2D obj;
    obj.plot();
    obj.display();
}