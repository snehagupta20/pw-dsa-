// Q1. Given an array of elements, sort the array in decreasing order using min heap.
// arr[] = {5, 3, 10, 1}
// arr[] = {10, 5, 3, 1}

#include <iostream>
using namespace std;

void decreasing(int maxheap[], int size){
    int i=0;

    while((i*2)+1 < size){
        cout<<"i = "<<i<<endl;
        cout<<(i*2)+1<<" < "<<size<<endl;
        int leftchild = (i*2)+1 ;
        int rightchild = (i*2)+2 ;

        cout<<"leftchild : "<<maxheap[leftchild]<<endl;
        cout<<"rightchild : "<<maxheap[rightchild]<<endl;
        
        if(rightchild < size){
            
            cout<<"rightchild exists"<<endl;

            if(maxheap[i] > maxheap[leftchild] || maxheap[i] > maxheap[rightchild]){
                cout<<"parent is smaller than child"<<endl;
                if(maxheap[leftchild] < maxheap[rightchild]){
                    cout<<"leftchild is greater than rightchild"<<endl;
                    swap(maxheap[i], maxheap[leftchild]);
                    for(int i=0;i<size;i++){
                        cout<<maxheap[i]<<" ";
                    }cout<<endl;
                } else {
                    cout<<"rightchild is greater than leftchild"<<endl;
                    swap(maxheap[i], maxheap[rightchild]);
                    for(int i=0;i<size;i++){
                        cout<<maxheap[i]<<" ";
                    }cout<<endl;
                }
            }
        }

        else if(maxheap[i] > maxheap[leftchild]){
            cout<<"right child does not exixts"<<endl;
            swap(maxheap[i], maxheap[leftchild]);
        }

        i++;
    }
}

int main(){
    int maxheap[10] = {5,3,10,1};
    int size = 4;

    for(int i=0;i<size;i++){
        cout<<maxheap[i]<<" ";
    }cout<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<" ";
    }cout<<endl;

    decreasing(maxheap, size);

    for(int i=0;i<size;i++){
        cout<<maxheap[i]<<" ";
    }cout<<endl;
}

// max heap banana hai 
/*
0 1 2  3
5 3 10 1





  10
 3  5 
1

  5
 3 10
1
*/