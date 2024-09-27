// Problem 2 Given two numbers a & b, find the value a^b using a recursive functions
// Input a =5 , b=3

// Output 125

// Explanation (5*5*5)=125

#include <iostream>
using namespace std;

int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans=a;
    cout<<power(a,b);
    return 0;
}