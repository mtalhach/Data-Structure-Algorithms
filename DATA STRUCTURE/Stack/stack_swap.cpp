#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stack1;
    stack<int> stack2;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);

    stack2.push(5);
    stack2.push(6);
    stack2.push(7);
    stack2.push(8);

    stack1.swap(stack2);

    cout << "After Swapping stack 1 is: ";
    while (!stack1.empty())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }

    cout << "\n\nAfter Swapping stack 2 is: ";
    while (!stack2.empty())
    {
        cout << stack2.top() << " ";
        stack2.pop();
    }
}
