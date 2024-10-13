/*
Largest rectangle in histogram
Q4. Given an array of integer heights representing the histogram's bar height where the width of each bar is
1, return the area of the largest rectangle in the histogram.
The first line of input contains the number of elements in the array.
The second line of input contains the elements of the array.

Input
6
2 1 5 6 2 3

Output
10
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> findnse(vector<int> arr){
    stack<int> st;
    vector<int> nse(arr.size());

    for(int i=0;i<arr.size();i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            nse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        nse[st.top()] = arr.size()+1;
        st.pop();
    }

    return nse;
}

vector<int> findpse(vector<int> arr){
    stack<int> st;
    vector<int> pse(arr.size());

    for(int i=arr.size()-1;i>=0;i--){
        while(!st.empty() && arr[i]<arr[st.top()]){
            pse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        pse[st.top()] = arr.size()+1;
        st.pop();
    }

    return pse;
}

int histogram(vector<int> arr){
    // 1. find nse 
    vector<int> nse = findnse(arr);

    // 2. find pse 
    vector<int> pse = findpse(arr);

    // 3. find max area
    int area=0;
    for(int i=0;i<arr.size();i++){
        int width = nse[i]-pse[i]-1;
        int height = arr[i];
        area = max(area, width*height);
    }

    return area;

}

int main(){
    cout<<"enter num of elements = ";
    int n;
    cin>>n;

    vector<int> arr;
    cout<<"enter the elements of vector : ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<"max area of the histogram is = "<<histogram(arr);
    
    return 0;
}