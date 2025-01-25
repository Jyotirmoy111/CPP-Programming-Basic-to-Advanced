/*Problem Statement: You are given a code that prints three integers a, b, and c. You need to comment on the line of code that prints the integer b such that this line does not compile.

 Note: // This is also a comment

Examples :
Input: a = 5, b = 6, c = 15
Output: 5 15
Explanation: Only the value of a and c is printed as the line of code that prints b is commented.
Developed by Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    cout<<"a";
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a<<" "<<c;
    return 0;
}