/*Problem- You are given two integer variables x and y. You need to perform the following operations:

p = x + y : Addition
q = x - y : Subtraction
r = x * y :Multiplication
s = x / y : Division
t = x % y : Modulo
Examples:

Input: x = 1, y = 2
Output: 3 -1 2 0 1 
Explanation: The given operations are performed.
Input: x = 3, y = 4 
Output: 7 -1 12 0 3 
Explanation: The given operations are performed
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>> x>> y;
    int p,q,r,s,t;
    p= x+y;
    q= x-y;
    r= x*y;
    s= x/y;
    t= x%y;
    cout<<p<<" "<<q<<" "<<r<<" "<<s<<" "<<t;
    return 0;
}