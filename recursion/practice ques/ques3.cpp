// Print the max value of the array [ 3,10,3,2,5 ]

#include <iostream>
#include <algorithm>
using namespace std;

int maxnum(int arr[], int size){
    if(size==1) return arr[0];
    int maxofRest=maxnum(arr+1,size-1);
    return max(maxofRest, arr[0]);
}

int main(){
    int arr[]={3,10,3,2,50};
    int size=5;
    cout<<maxnum(arr,size);
    return 0;
}