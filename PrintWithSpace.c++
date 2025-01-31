/*Given two inputs that are store in variables a and b, you need to print a and b in a single line with a space separating them.
Add new line after printing with space.
Developed by- Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);

    cout<<a<<" "<<b;
}