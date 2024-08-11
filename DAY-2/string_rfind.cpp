// C++ program to demonstrate rfind() method
#include <iostream>
#include <string>
using namespace std;
 
// Function to return last occurrence
// of string in a string
void findLastOccurrence(string str, string s)
{
 
    // To store the index of the result
    size_t found;
 
    // Function to find the first index
    // of last occurrence of string s in str
    found = str.rfind(s);
    
    // If string doesn't have
    // string s present in it
    if (found == string::npos) {
        cout << "String '" << s
             << "' is not present in"
             << " the given string.";
    }
 
    // Else print the position
    else {
        cout << "The first index of last "
             << "occurrence of '" << s
             << "' is found at index: "
             << found << endl;
    }
}
 
// Driver Code
int main()
{
    // Given String
    string str("Welcome to C++!");
 
    // string to be found
    string s = "Java";
 
    findLastOccurrence(str, s);
}