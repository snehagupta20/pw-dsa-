// #include <bits/stdc++.h>
// Q1. Given an array of elements, sort the array in decreasing order using min heap.
// arr[] = {5, 3, 10, 1}
// arr[] = {10, 5, 3, 1}

#include <iostream>
using namespace std;

void heapify(int arr[], int &size, int i){
    int smallest = i;
    int leftchild = 2*i + 1;
    int rightchild = 2*i +2;

    if(leftchild < size && arr[leftchild] < arr[smallest]){
        smallest = leftchild;
    }

    if(rightchild < size && arr[rightchild] < arr[smallest]){
        smallest = rightchild;
    }

    if(smallest != i){
        swap(arr[i], arr[smallest]);
        heapify(arr, size, smallest);
    }

    return;
}

void buildMinHeap(int arr[], int &size){
    for(int i=size/2 - 1; i>=0; i--){
        heapify(arr, size, 0);
    }

    return;
}

int deleteRoot(int arr[], int &size){
    int root = arr[0];
    swap(arr[0], arr[size-1]);
    size--;

    buildMinHeap(arr,size);

    return root;
}

int main(){
    int arr[4] = {5,3,10,1};
    int sorted[4] = {};
    int size = 4;
    
    buildMinHeap(arr, size);

    int i=0;
    int j=size-1;
    while(i < size){
        sorted[j] = deleteRoot(arr, size);
        j--;
    }

    size=4;
    for(int i=0;i<size;i++){
        cout<<sorted[i]<<" ";
    }cout<<endl;
}