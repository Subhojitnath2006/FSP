#include <iostream> 
using namespace std;

union student {
    int rollNo;
    int age;
};

int main() {
    //definition--->In C++, a union is a user-defined datatype in which we can define members of different types of data types just like structures. But one thing that makes it different from structures is that the member variables in a union share the same memory location, unlike a structure that allocates memory separately for each member variable. The size of the union is equal to the size of the largest data type.
    
    student s1;

    // Input and display roll no
    s1.rollNo=225;
    cout<<"Student Roll no is:"<<s1.rollNo<<endl;

    // Input and display age
    s1.age = 20;
    cout << "Student Age: " << s1.age << endl;

    // Display the size of the union
    cout << "Size of union: " << sizeof(s1) << endl;

    return 0;
}
