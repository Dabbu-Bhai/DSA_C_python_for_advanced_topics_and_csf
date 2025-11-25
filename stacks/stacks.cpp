#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> st;
    st.push(10);//pushes into stack
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.top();//returns the top element
    st.pop();//removes the top element
    st.empty();//returns true if stack is empty
    st.size();//returns the size of stack
    return 0;
}