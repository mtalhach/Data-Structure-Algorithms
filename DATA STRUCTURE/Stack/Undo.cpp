#include <bits/stdc++.h>
using namespace std;
struct s
{
    int value;
    int index;
};
class editor
{
private:
    int array[10];
    int counter;
    int top;

public:
    stack<s> stk, st;
    editor()
    {
        array[0] = 2;
        array[1] = 1;
        array[2] = 9;
        array[3] = 7;
        array[4] = 6;
        counter = 5;
        top = -1;
    }
    
void display(){
	for(int i=0;i<counter;i++){
		cout<<array[i]<<"    ";
	}
	cout<<endl;
}
    void del()
    {
        int index;
        s val;
        cout << "\nEnter The index you want to del:  ";
        cin >> index;
        val.index = index;
        val.value = array[index];
        stk.push(val);
        // cout << "value is: " << stk.top().value << endl;
        // cout << "Index is: " << stk.top().index << endl;
        for (int i = index; i < counter - 1; i++)
        {
            array[i] = array[i + 1];
        }
        counter--;
        for (int i = 0; i < counter; i++)
        {
            cout << array[i] << " ";
        }
    }

    void Undel()
    {
        for (int i = counter-1; i >=stk.top().index; i--)
        {
            array[i + 1] = array[i];
        }
         counter++;
        array[stk.top().index] = stk.top().value;
        for (int i = 0; i < counter; i++)
        {
            cout << array[i] << " ";
        }
    }

    void choice()
    {
        	int opt;
        cout << "\nPress 1: For Undelete: ";
        cin >> opt;
        if (opt == 1)
        {
            Undel();
        }
        else
        {
            cout << "Not Undelete";
        }
		}
};

int main()
{
    editor ed;
    ed.display();
    while(1){
    	ed.del();
    ed.choice();
	}
}
