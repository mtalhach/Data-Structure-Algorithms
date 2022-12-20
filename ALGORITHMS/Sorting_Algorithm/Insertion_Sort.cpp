// Insertion Sort O(n^2)
#include <iostream>
using namespace std;
class sort
{
public:
    int arr[6] = {5, 4, 10, 1,6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp,j;
    void sorting()
    {
        for (int i = 1; i < n; i++)
        {
        	temp=arr[i];
        	j=i-1;
            while(j>=0 && arr[j]>temp)
            {
               arr[j+1]=arr[j];
               j--;
            }     // end while loop
            arr[j+1]=temp;
        }         // end outer for loop
    }             // end sorting()
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "  ";
        }
    }
};

int main()
{
    sort obj;
    obj.sorting();
    obj.display();
}
