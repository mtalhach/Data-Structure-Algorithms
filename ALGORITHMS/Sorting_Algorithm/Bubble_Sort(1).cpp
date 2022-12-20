// Bubble sort By rafference O(n^2)
#include <iostream>
using namespace std;
class sort
{
public:
    int array[5] = {8, 5, 3, 9, 4};
    int n = sizeof(array) / sizeof(array[0]);
    int temp,flag;

    void sor(int *x, int *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    void sorting()
    {
        for (int i = 0; i < n-1; i++)
        {
        	flag=0;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    sor(&array[j], &array[j + 1]);
                    flag++;
                } // end if
            }     // end inner for loop
            if(flag==0){
            	break;
			}
        }         // end outer for loop
    }             // end sorting()
    void display()
    {
        for (int k = 0; k < n; k++)
        {
            cout << array[k] << "  ";
        }
    }
};

int main()
{
    sort obj;
    obj.sorting();
    obj.display();
}
