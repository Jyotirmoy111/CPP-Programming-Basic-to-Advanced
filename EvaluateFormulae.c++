/*Problem- Given four inputs that are stored in variables a, b, c, and d. You need to write an expression to evaluate the following formula. Use integer division. The expression should be a single statement.
Examples:
Input: a = 10, b = 4, c = 7, d = 9
Output: 11
Explanation: 10 + 4 = 14, 14 // 7 = 2(Python) or 14 / 7 = 2(Java or CPP or C), 2 + 9 = 11.
Developed by-Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<((a+b)/c)+d;
    return 0;
}