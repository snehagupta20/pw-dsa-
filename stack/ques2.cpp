/*
Q2. Given an arraylist, print the Next Greater Element (NGE) for every element.
The Next Greater Element for an element x is the first greater element on the right side of x in the vector.
Elements for which no greater element exists, consider the next greater element as -1.
The first line of input contains the size of the vector.
The second line of input contains the elements of the vector.

Input
4
1 3 2 4

Output
3 4 4 -1

input
4
1 5 3 4 

output
4 -1 -1 -1
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nge(vector<int> a){
    stack<int> st;
    vector<int> ans(a.size());

    for(int i=0;i<a.size();i++){
        while(!st.empty() && a[st.top()]<a[i]){
            ans[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        ans[st.top()] = -1;
        st.pop();
    }

    return ans;
}

int main(){
    cout<<"length of arr = ";
    int n;
    cin>>n;

    cout<<"array elements : ";
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    vector<int> ans = nge(arr);

    cout<<"ans vec : ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}