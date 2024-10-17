/*
Q2. Given are N ropes of different lengths, the task is to connect these ropes into one rope with
minimum cost, such that the cost to connect two ropes is equal to the sum of their lengths.

input: 
arr[] = {4,3,2,6} , N = 4

output:
29

Explanation:
First, connect ropes of lengths 2 and 3. Now we have three ropes of lengths 4, 6, and 5.
Now connect ropes of lengths 4 and 5. Now we have two ropes of lengths 6 and 9.?
Finally connect the two ropes and all ropes have connected.

2+3 = 5
5+4 = 9
9+6 = 15

connection cose : 5+9+15 = 29

- heapify (min heap)
- extract root
- delete root 
- heapify
- again extract root
- delete root
- heapify
- sum of those 2 roots extracted
- insert new rope
- store sum of 2 ropes as cost


*/


#include <iostream>
using namespace std;

void heapify(int arr[], int size, int i){
    int smallest = i;
    int leftchild = 2*i + 1;
    int rightchild = 2*i + 2;

    if(leftchild < size && arr[smallest] > arr[leftchild]){
        smallest = leftchild;
    }

    if(rightchild < size && arr[smallest] > arr[rightchild]){
        smallest = rightchild;
    }

    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapify(arr, size, smallest);
    }

    return;
}

void buildMinHeap(int arr[], int size){
    for(int i=size/2 -1;i>=0;i--){
        heapify(arr, size, i);
    }
    return;
}

int deleteRoot(int arr[], int &size){
    int root = arr[0];
    swap(arr[0], arr[size-1]);
    size--;

    heapify(arr, size, 0);
    
    // cout<<"after deleting : ";
    // for(int i=0;i<size;i++){
        // cout<<arr[i]<<" ";
    // }cout<<endl;

    return root;

}

void insert(int arr[], int &size, int val){
    arr[size] = val;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    size++;
    heapify(arr, size, 0);
    return;
}


int main(){
    int arr[4] = {4,3,2,6}; 
    int size = 4;

    buildMinHeap(arr, size);
    // for(int i=0;i<size;i++){
        // cout<<arr[i]<<" ";
    // }cout<<endl;

    int ans = 0;

    while(size > 0){
        int root1 = deleteRoot(arr, size);
        int root2 = deleteRoot(arr,size);
        // cout<<"root1 = "<<root1<<" root 2 = "<<root2<<endl;
        int sum = root1+root2;
        ans += sum;
        // cout<<"ans = "<<ans<<endl;
        if(size > 0){
            insert(arr,size,sum);
            // cout<<"after inserting: ";
            // for(int i=0;i<size;i++){
                // cout<<arr[i]<<" ";
            // }cout<<endl;   
        }
    }
    
    cout<<ans;

    return 0;
}