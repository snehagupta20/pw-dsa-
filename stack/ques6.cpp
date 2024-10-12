// insert at bottom of stack

#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int>& st, int bottom){

    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    st.push(bottom);

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    return ;
}

int main(){
    cout<<"capacity of the stack = ";
    int n;
    cin>>n;

    stack<int> st;
    
    cout<<"stack elements : ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st.push(a);
    }

    int bottom;
    cout<<"element to insert at bottom = ";
    cin>>bottom;

    insertBottom(st, bottom);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}