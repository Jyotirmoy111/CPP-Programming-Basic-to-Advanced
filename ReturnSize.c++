/*Problem- Given a some variables in the C++ code you need to store the size of these variables into a, b, c integer variables. 

Note:  You just need to store the size into a, b, c variables only.

Examples:

Input: None
Output: 4 8 1
Explanation: printing the size of int, double, char datatype variables.
Developed by Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    int x= 2;
    double y= 3.5;
    char z= 'g';
    //Printing size of datatypes
    int a,b,c;
    a= sizeof(x);
    b= sizeof(y);
    c= sizeof(z);
    cout<< a<<" "<< b<<" "<< c<< endl;
}