// Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
// Sample Input : 12345
// Sample Output : 1+4=5


#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"input a 5 digit num = ";
    cin>>a;
    int first = a/10000;
    //removing last digit first then geting last digit 
    int seclast = (a/10) % 10;
    cout<<first+seclast;

    return 0;
}