// previous smaller element

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> pge(vector<int> arr){
    stack<int> st;
    vector<int> ans(arr.size());

    for(int i=arr.size()-1;i>=0;i--){
        while(!st.empty() && arr[i]<arr[st.top()]){
            ans[st.top()] = arr[i];
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
    cout<<"number of elements = ";
    int n;
    cin>>n;

    vector<int> arr;
    cout<<"enter the elements of the vecto: ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    arr = pge(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}