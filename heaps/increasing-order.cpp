// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void heapify(int arr[], int &size, int i){

    // if(2*i + 1 < size) return;

    int smallest = i;
    int leftchild = 2*i + 1;
    int rightchild = 2*i + 2;

    // left child exist & larger than root
    if(leftchild < size && arr[leftchild] < arr[smallest]){
        smallest = leftchild;
    }

    // if right is present & larger than parent;
    if(rightchild < size && arr[rightchild] < arr[smallest]){
        smallest = rightchild;
    }

    //if root not largest, swap
    if(smallest != i){
        swap(arr[i], arr[smallest]);
        heapify(arr,size, smallest);
    }



    return;
}

void buildMinHeap(int arr[], int size) {
    // Start from the last non-leaf node and heapify each node
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
}

int removeRoot(int arr[], int &size){
    swap(arr[0], arr[size-1]);
    int root = arr[size-1];
    
    arr[size-1] = 0;
    size--;

    // heapify(arr, size, 0);
    buildMinHeap(arr, size);

    return root;
}

int main(){
    int arr[20] = {60,10,80,50,5,20,70};
    int sorted[20] = {};
    int size = 7;

    // cout<<"smallest idx "<<(size-2)/2<<endl;
    // heapify(arr, size,( size-2 )/ 2);
    buildMinHeap(arr, size);

    int i=0;
    int j=0;
    while(i<size){
        // cout<<"size = "<<size<<endl;
        int root = removeRoot(arr, size);
        sorted[j] = root;
        j++;
    }

    size=7;
    for(int i=0;i<size;i++){
        cout<<sorted[i]<<" ";
    }cout<<endl;

}

/*
60 10 80 50 5 20 70

   60
 10   80
50 5 20 70

heapify : max heap 

   80
 50   70
10 5 20 60

now, remove elements from heap (root node)

1. remove 80

   70
 50   60
10 5 20 

place 80 at last index, but dont consider it a part of heap 

70 50 60 10 5 20 80

2. remove 70

   60
 50   20
10 5 

60 50 20 10 5 80 70

and so on...

*/