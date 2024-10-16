#include <iostream>
using namespace std;

void deleteMinheap(int minheap[], int val, int &size){
    for(int i=0;i<size-1;i++){
        if(minheap[i] == val){
            while(i<size-1){
                minheap[i] = minheap[i+1];
                i++;
            }
        }
    }
    size--;
    return;
}

int main(){
    int minheap[10] = {1,2,3,4,5,6,7};
    int val = 1;
    int size = 7;

    deleteMinheap(minheap, val, size);

    for(int i=0;i<size;i++){
        cout<<minheap[i]<<" ";
    }cout<<endl;

    return 0;
}

/*

- remove that element 
- shift all elements after that element by 1 space peeche

7 delete

   1
 2   3
4 5 6 7 

delete 7 

   1
 2   3
4 5 6 

insert 7
delete 6

   1
 2   3
4 5 6 7 

- delete 6
- shift all baki ke  numbers 1 peeche

   1
 2   3
4 5 7 

insert 6
delete 4

   1
 2   3
5 6 7 

insert 4
delete 1

   2
 3   4
5 6 7 

perfff

*/