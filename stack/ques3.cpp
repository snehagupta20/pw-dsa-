/*
Q3. Given a series of N daily price quotes for a stock, we need to calculate the span of the stock’s price for all
N days. The span of the stock's price in one day is the maximum number of consecutive days (starting from
that day and going backward) for which the stock price was less than or equal to the price of that day.

The first line of input contains the value of N.
The second line of input contains the stock price for each day.

input:
7
100 80 60 70 60 75 85

output:
1 1 1 2 1 4 6
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> span(vector<int> arr){
    
    stack<int> st;
    vector<int> ans;
    ans.push_back(1);

    for(int i=0;i<arr.size();i++){

        while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
        if(!st.empty() && arr[st.top()] > arr[i]) ans.push_back(i-(st.top()));

        st.push(i);

    }

    return ans;

}

int main(){
    int size;
    cin>>size;

    vector<int> arr;

    cout<<"give the arr : ";
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    vector<int> ans;
    ans = span(arr);

    cout<<"span : ";
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";

    return 0;

}