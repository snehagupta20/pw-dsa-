// Q4- Write a program to print positive number entered by the user, if user enters a negative
// number, it is skipped.
// Sample Input : Enter an integer: -6
// Sample Output : The number is negative and skipped

#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a>=0) cout<<a;
    else cout<<"The number is negative and skipped";
    return 0;
}