// this approach wont work since we cannot actually traverse the min heap.

#include <iostream>
using namespace std;

void deleteMinheap(int minheap[], int val, int &size){
    swap(minheap[0], minheap[size-1]);
    
    minheap[size-1] = 0;
    size--;

    int i=0;
    // for(int i=0;i<size;i++){
        while((2*i)+1 < size ){

            if((2*i)+2 < size){
                if(minheap[(2*i) + 1] > minheap[(2*i) + 2]){
                    swap(minheap[i], minheap[(2*i) + 2]);
                } else {
                    swap(minheap[i], minheap[(2*i) + 1]);
                }
            } else {
                swap(minheap[i], minheap[(2*i) + 1]);
            }

            i++;
        }
    // }

    return;
}
 
int main(){
                 //    0 1 2 3 4 5 6 
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



   2
 4   6
7 5 3 

     5
  20    10
40  50 30 60

i-1 / 2

remove 5
swap[0,size-1]

     60
  20    10
40  50 30 5

remove last element

     60
  20    10
40  50 30 

check if the tree is minheap or nott
arr : 60 20 10 40 50 30

traverse from starting
if root > 2i+1(left child)/2i+2(right child)
    swap(root, min(left,right));

     10
  20    60
40  50 30 

60> 20 && 10
swap 60,10

similarly check aage.



- remove that element 
- shift all elements after that element by 1 space peeche

7 delete

   1
 3   2
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