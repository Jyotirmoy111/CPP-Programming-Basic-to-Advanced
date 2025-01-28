/* Problem Statement: You are given one integer a, float b and  long c variable. You need to add all these variables and store them into auto variable ans.

Examples:

Input: a= 3, b= 4.2, c= 23
Output: 30.2
Explanation: a + b + c = 30.2
Input: a= 2, b= 7.42, c= 100
Output: 109.42
Developed by Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    int a;
    float b;
    long c;
    cin>> a>> b>> c;
    auto ans= a+b+c;
    cout<< ans<< endl;
}