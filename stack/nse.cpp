// next smaller element

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nse(vector<int> arr){
    stack<int> st;
    vector<int> ans(arr.size());

    for(int i=0;i<arr.size();i++){
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
    cout<<"number of elements in vector = ";
    int n;
    cin>>n;

    cout<<"elements of vector : ";
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    arr = nse(arr);
    
    cout<<"next smaller element vector : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}