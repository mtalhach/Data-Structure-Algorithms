#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    stack<int> st;
    st.push(4);
    st.push(2);
    st.push(12);

    // cout << "The Top Stack is: " << st.top();
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    cout << "Sum is:  " << sum;
}