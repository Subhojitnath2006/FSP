#include <iostream>
using namespace std;

int main(){
    // dynamically allocate memory and assign int variable 
    int* point_var = new int{45};

    // print the value stored in memory
    cout << *point_var; // Output: 45

    // deallocate the memory
    delete point_var;

    // set pointer to nullptr
    point_var = nullptr;

    return 0;
}