// Q5 - Write a program to calculate the sum of digits of a 3 digit number.
// Sample Input : 123
// Sample Output : 6


#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a 3 digit number = ";
    cin>>a;
    int one=a/100;
    int two=(a/10)%10;
    int three=a%10;
    cout<<one+two+three;
    return 0;
}