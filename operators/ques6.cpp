// Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
// Sample Input : 8 10
// Sample Output :
// Sum = 18
// Difference = -2
// Product = 80
// Division = 0.8

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"SUM = "<<a+b<<endl;
    cout<<"DIFFERENCE = "<<a-b<<endl;
    cout<<"PRODUCT = "<<a*b<<endl;
    cout<<"DIVISION = "<<static_cast<float>(a)/b<<endl;
    return 0;
}