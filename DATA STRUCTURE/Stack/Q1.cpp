#include <iostream>
using namespace std;
#define SIZE 5
int stack[SIZE];
int top = -1;
void push()
{
    cout << "Enter The Value You Want to push: ";
    int value;
    cin >> value;
    if (top == SIZE - 1)
    {
        cout << "Stack is overflow\n";
    }
    else
    {
        top++;
        stack[top] = value;
        cout << "The Value push is: " << value;
    }
} // end push()

void pop()
{
    if (top == -1)
    {
        cout << "Stack is underflow\n";
    }
    else
    {
        int x = stack[top];
        top--;
        cout << "The poped value is: " << x;
    }
} // end pop()

void peek()
{
    if (top == -1)
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        cout << "Stack top element is: " << stack[top];
    }
} // end peek()

void display()
{
    cout << "\n\nResultant Stack is: ";
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
} // end display()

int main()
{
    int choice = 1;
    while (choice != 0)
    {
        cout << "\n\nPress 1:For push value: \n";
        cout << "Press 2:For pop value: \n";
        cout << "Press 3:For peek value: \n";
        cout << "Press 4:For Display value: \n";
        cout << "Press 5:For exit:  \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Enter The right command\n";
            break;
        }
    }
}
