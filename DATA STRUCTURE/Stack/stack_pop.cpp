#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    st.pop();
    st.pop();

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}