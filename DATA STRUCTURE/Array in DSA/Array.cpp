// C++ Program to Calculate Average of Numbers Using Arrays
#include <iostream>
using namespace std;
class Average
{
public:
    int array[10];
    double average;
    double sum = 0;
    void FindAverage(int number)
    {
        for (int i = 0; i < number; i++)
        {
            cin >> array[i];
            sum = sum + array[i];
        }
        average = sum / number;
        cout << "\nAverage is: " << average;
    }
};
int main()
{
    Average obj;
    cout << "Enter The Numbers You want to find average: ";
    double number;
    cin >> number;
    if (number > 0.0)
    {
        obj.FindAverage(number);
    }
    else
    {
        cout << "Enter The Positive integer;";
    }
}