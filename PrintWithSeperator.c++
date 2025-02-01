/*Problem- You'll be given two strings a and b, a separator symbol, and you need to print a and b such that a and b are separated by the separator symbol followed by a new line.

Examples:

Input: a = "Hello", b = "World", separator = "@"
Output: Hello@World
Explanation: a and b are printed with the separator symbol in between.
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
    string sep;
    getline(cin, sep);
    cout<<a<<sep<<b;
    return 0;
}