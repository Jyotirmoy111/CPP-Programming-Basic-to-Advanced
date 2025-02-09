/*Problem- Logical operators AND, OR, NOT are used in condition checking. Like a AND b checks if both a and b are true. a OR b checks if either of a or b is true. !a complements the boolean value of a.

In this question you basically need to do
a && b
a || b
!a

Examples:
Input: a = false, b = true
Output: false true true
Explanation: false AND true gives false. false OR true gives true. NOT false give true.
Input: a = true, b = true 
Output: true true false
Explanation: true AND true gives true. true OR true gives true. NOT true give false.

Developed by Jyotirmoy*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    bool a;
    bool b;
    cin>>boolalpha>>a;
    cin>>boolalpha>>b;
    cout<<boolalpha<<(a&&b)<<" "<< (a||b)<<" "<<!a;
    return 0;
}