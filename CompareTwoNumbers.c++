/*Problem- You are given two numbers a and b. If a is greater than b print 1, otherwise print 0.

Examples :
Input: a = 4, b = 6
Output: 0
Explanation: a is smaller than b.
Input: a = 2, b = -9
Output: 1
Explanation: a is greater than b.
Input: a = 5, b = 5
Output: 0
Explanation: a is not greater than b, both are equal.
Developed by Jyotimoy*/
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    if(a>b){
        cout<<1;
    }else{
        cout<<0;
    }

}