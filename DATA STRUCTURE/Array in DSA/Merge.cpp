// Merge Arrays
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Merge
{
public:
    int arrA[10], arrB[10], merge[10];
    int n1, n2, n3;
    void initianlizeA()
    {
        cout << "Enter The Size of Array 1: ";
        cin >> n1;
        if (n1 > 0 && n1 < 10)
        {
            for (int i = 0; i < n1; i++)
            {
                cout << "element:- [" << i + 1 << "] ";
                cin >> arrA[i];
            } // end for loop
            cout << endl;
        } // end if (n1 > 0 && n1 < 10)
        else
        {
            cout << "Array size out of Bound\n";
        }
    } // end initianlizeA()
    void initianlizeB()
    {
        cout << "Enter The Size of Array 2: ";
        cin >> n2;
        if (n2 > 0 && n2 < 10)
        {
            for (int i = 0; i < n2; i++)
            {
                cout << "element:- [" << i + 1 << "] ";
                cin >> arrB[i];
            } // end for
            cout << endl;
        } // end if (n1 > 0 && n1 < 10)
        else
        {
            cout << "Array size out of Bound\n";
        }
    } // end initianlizeB()

    void mer()
    {
        n3 = 0;
        for (int i = 0; i < n1; i++)
        {
            merge[n3] = arrA[i];
            n3++;
        }
        for (int j = 0; j < n2; j++)
        {
            merge[n3] = arrB[j];
            n3++;
        }
    } // end mer()

    void DisplayMerge()
    {
        // sorting of array
        sort(merge, merge + n3);
        // sort(merge, merge + n3, greater<int>());
        cout << "Merged Array\n";
        for (int i = 0; i < n3; i++)
        {
            cout << merge[i] << " ";
        }

    } // end  DisplayMerge()
};

int main()
{
    Merge obj;
    obj.initianlizeA();
    obj.initianlizeB();
    obj.mer();
    obj.DisplayMerge();
}