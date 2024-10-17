// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void heapify(int arr[], int &size){
    int i=0;

    while(2*i + 1 < size){ // iske aage leaf nodes aa jate hai

        int leftchild = 2*i + 1;
        int rightchild = 2*i + 2;
        int parent = i;

        if(rightchild < size){ // right child present

            if(arr[parent] < arr[leftchild] || arr[parent] < arr[rightchild]){ // parent smaller than its child nodes

                if(arr[leftchild] > arr[rightchild]){
                    swap(arr[parent], arr[leftchild]);
                } else {
                    swap(arr[parent], arr[rightchild]);
                }
            }
        }

        else if(arr[parent] < arr[leftchild]){
            swap(arr[parent], arr[leftchild]);
        }

        i++;

    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return;
}

int removeRoot(int arr[], int &size){
    swap(arr[0], arr[size-1]);
    int root = arr[size-1];
    
    arr[size-1] = 0;
    size--;

    heapify(arr, size);

    return root;
}

int main(){
    int arr[20] = {60,10,80,50,5,20,70};
    int sorted[20] = {};
    int size = 7;

    heapify(arr, size);

    int i=0;
    int j=0;
    while(i<size){
        cout<<"size = "<<size<<endl;
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