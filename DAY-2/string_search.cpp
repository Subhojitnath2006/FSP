#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"Enter a string: ";
    string str;
    getline(cin, str);

    cout<<"Enter search string:";
    string search_str;
    getline(cin, search_str);
    
    // find the first occurrence
    size_t first_occurrence = str.find(search_str);
    
    // find the last occurrence
    size_t last_occurrence = str.rfind(search_str);
    
    if (first_occurrence != string::npos) {
        cout << "First occurrence:'"<<search_str<<"' found at position: " << first_occurrence << endl;
        cout << "Last occurrence: '"<<search_str<<"' found at position: " << last_occurrence << endl;
    }
    else {
        cout << "'"<<search_str<<"' not found" << endl;
    }

    return 0;
}