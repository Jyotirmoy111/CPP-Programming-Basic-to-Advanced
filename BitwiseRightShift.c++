/*Problem- Given two positive integers a and b. Your task is to perform right shift bitwise operation on it as given i.e. a>>b.

Examples:
Input: a = 5, b = 2
Output: 1 
Explanation: (101)2 >> 2 = (001)2
Input: a = 4, b = 1
Output: 2
Explanation: (100)2 >> 1 = (010)2
Developed by Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>> a>> b;
    cout<<(a>>b);
    return 0;
}