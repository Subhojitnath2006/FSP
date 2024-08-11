#include <iostream>
#include <string>
using namespace std;

int main() {

    cout<<"Enter a string: ";
    string str;
    getline(cin, str);

    cout<<"entre string to replace:";
    string search_str;
    getline(cin,search_str);

    

    cout << "Before: " << str << endl;
    
    // replace three characters with "Java"
    // starting from the seventh index
    //str.replace(startingIndex,no of characters to be replaced,new sub string );
    size_t first_occurrence = str.find(search_str);
    str.replace(first_occurrence, search_str.length(), "Java");

    cout << "After: " << str << endl;

    return 0;
}