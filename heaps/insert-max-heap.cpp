// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void insert(int maxHeap[], int &size, int value){
    size++;
    maxHeap[size-1] = value;
    int curr = size-1;

    while(curr > 0 && maxHeap[(curr-1)/2] < maxHeap[curr]){
        swap(maxHeap[(curr-1)/2] , maxHeap[curr]);
        curr = (curr-1)/2;
    }

    return;
}

int main(){
    int maxHeap[10] = {70,60,50,40,30,20,10};
    int size = 7;
    int value = 100;

    insert(maxHeap, size, value);

    for(int i=0;i<size;i++){
        cout<<maxHeap[i]<<" ";
    } cout<<endl;

    return 0;
}