/*Problem- Given two inputs that are stored in variables a and b, you need to print a and b in a single line without space betweenthem.
Note: Print a new line at the end after printing.

Examples:

Input:a = "Hello", b = "World"
Output: HelloWorld
Explanation: a and b are printed in a single line without space between them.
Developed by Jyotirmoy
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);
    cout<<a<<b;
}