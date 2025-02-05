/*Problem- There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we have to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b with decimal precision of a/b upto 3 places after the decimal point.

Note : Do not forget to print a new line ater printing the values.

Examples :
Input: a = 5.43, b = 2.653
Output: 2.047
Developed by Jyotirmoy*/
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // code here
    double a,b;
    cin>>a;
    cin>>b;
    cout<<fixed<<setprecision(3)<<a/b;
    return 0;
}