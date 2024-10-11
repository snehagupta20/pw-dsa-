/*
Q1. Check if a given bracket sequence consisting of ‘(‘ and ‘)’ is balanced or not. A balanced bracket
sequence is a string consisting of only brackets, such that this sequence, when inserted with certain
numbers and mathematical operations, gives a valid mathematical expression.

input:
()(
output:
false

input:
()(())
output:
true
*/



#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool validstr(string s){

    stack<char> st;

    for(const auto i : s){
        if(i=='('){
            st.push(i);
        }
        else if(i==')' && st.top()=='('){
            st.pop();
        }
    }
    if(st.empty()) return true;
    return false;
}

int main(){
    string s;
    cin>>s;

    if(validstr(s)) cout<<"TRUE";
    else cout<<"FALSE";

    return 0;
}