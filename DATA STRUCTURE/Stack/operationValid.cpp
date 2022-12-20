#include <bits/stdc++.h>
using namespace std;
class expression
{
private:
    string exp;
    stack<char> s;
    int counter;

public:
    expression() // constructor
    {
        cout << "\n\nEnter The Expression: ";
        cin >> exp;
        counter = exp.length();
    }

    bool CheckBrackets()
    {
        char x;
        for (int i = 0; i < counter; i++)
        {
            if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            {
                s.push(exp[i]);
                continue;
            }
            switch (exp[i])
            {
            case ')':
                x = s.top();
                s.pop();
                if (x == '{' || x == '[')
                {
                    return false;
                }
                break;
            case '}':
                x = s.top();
                s.pop();
                if (x == '(' || x == '[')
                {
                    return false;
                }
                break;
            case ']':
                x = s.top();
                s.pop();
                if (x == '(' || x == '{')
                {
                    return false;
                }
                break;
            }
        }
        return (s.empty());
    } // end areBalanceBrackt()
    bool checkOperators()
    {
        for (int i = 0; i < counter - 1; i++)
        {
            if (exp[i] == '+' || exp[i] == '*' || exp[i] == '-' || exp[i] == '/' && exp[i + 1] == '+' || exp[i + 1] == '*' || exp[i + 1] == '-' || exp[i + 1] == '/')
            {
                return false;
            }
        }
        return true;
    } // end checkOperators()
    bool checkValidity()
    {
        if (exp[0] != ')' && exp[0] != '}' && exp[0] != '}' && exp[0] != '+' && exp[0] != '-' && exp[0] != '*' && exp[0] != '/')
        {
            if (CheckBrackets())
            {
                if (checkOperators())
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
        return true;
    } // end checkValidity()
    void makeOperatorsValid()
    {
        for (int i = 0; i < counter; i++)
        {
            if (exp[i] == '+' && exp[i + 1] == '*' || exp[i] == '*' && exp[i + 1] == '+' || exp[i] == '*' && exp[i + 1] == '-' || exp[i] == '-' && exp[i + 1] == '*' || exp[i] == '+' && exp[i + 1] == '-' || exp[i] == '-' && exp[i + 1] == '+')
            {
                int opt;
                cout << "Press 0:To delete " << exp[i] << " Operator:\n";
                cout << "Press 1:To delete " << exp[i + 1] << " Operator:\n";
                cin >> opt;
                for (int j = i + opt; j < counter - 1; j++)
                {
                    exp[j] = exp[j + 1];
                }
                counter--;
            }
            else if (exp[i] == '+' && exp[i + 1] == '+' || exp[i] == '-' && exp[i + 1] == '-' || exp[i] == '*' && exp[i + 1] == '*' || exp[i] == '/' && exp[i + 1] == '/')
            {
                for (int j = i; j < counter - 1; j++)
                {
                    exp[j] = exp[j + 1];
                }
                i--;
                counter--;
            }
        }
    } // end void  makeOperatorsValid()
    void valid()
    {
        for (int i = 0; i < counter; i++)
        {
            if (!(exp[i] >= '0' && exp[i] <= '9' || exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '(' || exp[i] == '{' || exp[i] == '[' || exp[i] == ')' || exp[i] == '}' || exp[i] == ']'))
            {
                for (int j = i; j < counter - 1; j++)
                {
                    exp[j] = exp[j + 1];
                }
                i--;
                counter--;
            }
        }
    }

    void display()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << exp[i];
        }
    }

    void makeValid()
    {
        if (exp[0] == ')' || exp[0] == '}' || exp[0] == ']' || exp[0] == '+' || exp[0] == '-' || exp[0] == '*' || exp[0] == '/')
        {
            int j = 0;
            exp[j] = exp[j + 1];
        }
        valid();
        makeOperatorsValid();
        display();
    } // end void makevalid()

    void menu()
    {
        char opt;
        cout << "\nPress y:if you want to make the expression Valid:\n";
        cout << "Press n:To Exit\n";
        cin >> opt;
        switch (opt)
        {
        case 'y':
        case 'Y':
            makeValid();
            break;
        case 'n':
        case 'N':
            exit(0);
            break;

        default:
            break;
        }
    } // End Menu()

    void IsexpValid()
    {
        if (checkValidity())
        {
            cout << "Expression is valid";
        }
        else
        {
            cout << "Expression is Not Valid\n";
            menu();
        }

    } // end bool IsexpValid()
};

int main()
{
    expression expre;
    expre.IsexpValid();
}