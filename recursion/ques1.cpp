// Q1 - Given a number n, print the following pattern without using any loop.

// n, n-5, n-10, n-15, n-20, 5, 10, …, n-5, n

// There should be 0 or at most one occurrence of negative number in the series.


// Sample Input: n = 16

// Sample Output: 16, 11, 6, 1, -4, 1, 6, 11, 16


// Sample Input: n = 10

// Sample Output: 10, 5, 0, 5, 10

#include <iostream>
using namespace std;

void pattern(int n,int a){
    cout<<n<<" ";
    if(n<=0) return;
    pattern(n-5,a);
    cout<<n<<" ";
    return;
}

int main(){
    int n;
    cin>>n;
    int a=n;
    pattern(n,a);
    return 0;
}

// 16 
// 16<=0? no
// p(11)
// p(6)
// p(1)
// p(-4)
// p(1)
// output
// 16 11 6 1 -4 