#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(2);

    // cout << "The Top Stack is: " << st.top();
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}