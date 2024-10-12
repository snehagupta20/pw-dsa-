// copy stack

#include <iostream>
#include <stack>
using namespace std;

stack<int> copy(stack<int> st1){

    stack<int> temp;
    while(!st1.empty()){
        temp.push(st1.top());
        st1.pop();
    }

    stack<int> ans;
    while(!temp.empty()){
        ans.push(temp.top());
        temp.pop();
    }

    return ans;

}

int main(){
    int n;
    cin>>n;

    stack<int> st1;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st1.push(a);
    }

    stack<int> st2 = copy(st1);
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }

    return 0;
}