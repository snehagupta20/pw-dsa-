// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void insert(int minHeap[], int &size, int value){
    size++;
    minHeap[size-1] = value;
    int curr = size-1;

    while(curr > 0 && minHeap[(curr-1)/2] > minHeap[curr]){
        swap(minHeap[(curr-1)/2], minHeap[curr]);
        curr = (curr-1)/2;
    }

    return;
}

int main(){
    int minHeap[10] = {10,20,30,40,50,60,70};
    int size = 7;
    int value = 5;

    insert(minHeap,size,value);

    for(int i=0; i<size; i++){
        cout<<minHeap[i]<<" ";
    } cout<<endl;

    return 0;
}


