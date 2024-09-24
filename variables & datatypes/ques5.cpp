// Q5 - Write a C++ program to find size of basic data types. (Medium)
// Sample Input : Nil (Here it is expected that we explore the size of each data type that would be
// used commonly in the programs ahead. We can simply make use of sizeof(datatype) operator
// to accomplish this. Give it a try to know the data types in depth)
// Sample Output :
// Size of fundamental data types :
// The sizeof(char) : 1 bytes
// The sizeof(short) : 2 bytes
// The sizeof(int) : 4 bytes
// The sizeof(long): 4 bytes
// The sizeof(long long) : 8 bytes
// The sizeof(float) : 4 bytes
// The sizeof(double) : 8 bytes
// The sizeof(long double) : 12 bytes
// The sizeof(bool) : 1 bytes


#include <iostream>
using namespace std;

int main(){
    cout<<"The sizeof(char) : "<<sizeof(char)<<endl;
    cout<<"The sizeof(short) : "<<sizeof(short)<<endl;
    cout<<"The sizeof(int) : "<<sizeof(int)<<endl;
    cout<<"The sizeof(long): "<<sizeof(long)<<endl;
    cout<<"The sizeof(long long) : "<<sizeof(long long)<<endl;
    cout<<"The sizeof(float) : "<< sizeof(float)<<endl;
    cout<<"The sizeof(double) : "<< sizeof(double)<<endl;
    cout<<"The sizeof(long double) : "<< sizeof(long double)<<endl;
    cout<<"The sizeof(bool) : "<< sizeof(bool)<<endl;
    return 0;
}