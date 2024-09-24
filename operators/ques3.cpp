// Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
// girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
// Sample Input : 45
// Sample Output : 19

#include <iostream>
using namespace std;

int main(){

    int pupils;
    cin>>pupils;
    cout<<(0.8*45)-17;

    return 0;
}