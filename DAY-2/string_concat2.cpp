//concat 2 strings by reading from the console
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    // concatenate the strings
    cout << "Concatenated string1: " << str1 + " " + str2 << endl;
    cout<<str1<<endl;
    cout<<str2<<endl;

    
    cout << "Concatenated string2: " << str1.append(str2) << endl;

    cout<<str1<<endl;
    cout<<str2<<endl;

    return 0;
}