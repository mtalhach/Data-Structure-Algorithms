// Program to add two polynomials
#include <iostream>
using namespace std;
int max(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
} // end max(int n1, int n2)

int *add(int A[], int B[], int n1, int n2)
{
    int size = max(n1, n2);
    int *sum = new int[size];
    for (int i = 0; i < n1; i++)
    {
        sum[i] = A[i];
    }
    for (int i = 0; i < n2; i++)
    {
        sum[i] += B[i];
    }
    return sum;
} // end add()

void printPoly(int poly[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << poly[i];
        if (i != 0)
        {
            cout << "x^" << i;
        }
        if (i != n - 1)
        {
            cout << " + ";
        }
    }
} // end printPoly()

int main()
{
    int A[] = {5, 0, 10, 6};
    int B[] = {1, 2, 4};
    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);
    cout << "\nPolunmial 1\n";
    printPoly(A, n1);
    cout << "\nPolunmial 2\n";
    printPoly(B, n2);
    int *sum = add(A, B, n1, n2);
    int size = max(n1, n2);
    cout << "\nResultant Polunmial\n";
    printPoly(sum, size);
}
