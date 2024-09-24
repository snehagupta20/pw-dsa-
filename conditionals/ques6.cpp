// Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :
// Sample Input : Enter Your Marks: 98
// Sample Output : Your Grade is A+
// (Medium)
// Cracking the Coding Interview in C++ - Foundation
// 100 – 90 A+
// 90 – 80 A
// 80 – 70 B+
// 70 – 60 B
// 60 – 50 C
// 50 – 40 D
// 40 – 30 E
// 30 – 0 F

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks = ";
    cin>>marks;
    if(marks>90) cout<<"your grade is A+";
    else if(marks>80) cout<<"your grade is A";
    else if(marks>70) cout<<"your grade is B+";
    else if(marks>60) cout<<"your grade is B";
    else if(marks>50) cout<<"your grade is C";
    else if(marks>40) cout<<"your grade is D";
    else if(marks>30) cout<<"your grade is E";
    else if(marks>0) cout<<"your grade is F";

    return 0;
}