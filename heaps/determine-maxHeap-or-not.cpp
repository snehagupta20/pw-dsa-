// Q3. Given the level order traversal of a complete Binary Tree, determine whether the Binary Tree
// is a Max Heap or not.
// A complete binary tree means that all levels are filled except possibly the last level, and all nodes
// in the last level are as far left as possible.
// Binary Tree Level Order Traversal: 90, 15, 10, 7, 12, 2, 7, 3

#include <iostream>
using namespace std;

bool maxHeap(int arr[], int size){
    int i=0;
    while(i<=(size/2 - 1)){
        // cout<<i<<" "<<arr[i]<<endl;
        int parent = i;
        int leftchild = 2*i + 1;
        int rightchild = 2*i + 2;
        if(leftchild < size && arr[leftchild] > arr[parent]){
            return false;
        }
        if(rightchild < size && arr[rightchild] > arr[parent]){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    int arr[10] = {6,15,10,7,12,2,7,3};
    int size = 8;

    if(maxHeap(arr, size)) cout<<"MAX HEAP";
    else cout<<"NOT MAX HEAP";

    return 0;
}