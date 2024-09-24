// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.
// Sample Input :
// Enter an operator (+, -, *, /): -
// Enter two numbers:
// 6
// 8
// Sample Output : 6

#include <iostream>
using namespace std;

int main(){
    char op;
    cout<<"Enter an operator (+,-,*,/): ";
    cin>>op;
    int a,b;
    cout<<"enter 2 numbers: ";
    cin>>a>>b;
    if(op=='+') cout<<a+b;
    else if(op=='-') cout<<a-b;
    else if(op=='*') cout<<a*b;
    else if(op=='/') cout<<static_cast<float>(a)/b;

    return 0;
}