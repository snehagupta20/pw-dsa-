// Problem 1 Given an integer, find the sum of its digits using recursion.
// Input n= 1234
// Output 10
// Explanation 1+2+3+4=10

#include <iostream>
using namespace std;

int sum(int num){
    if(num<10){
        return num;
    }

    return num%10 + sum(num/10) ; 
}

int main(){
    int num;
    cin>>num;
    cout<<sum(num);
}