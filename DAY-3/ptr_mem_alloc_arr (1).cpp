#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* pMarks;
    
    // memory allocation of num number of floats
    pMarks = new float[num];
    
    cout << "Enter marks of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": ";
        cin >> *(pMarks + i);
    }
    
    cout << "\nDisplaying marks of students." << endl;
    for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(pMarks + i) << endl;
    }
    
    // ptrMarks memory is released
    delete[] pMarks;
    pMarks = nullptr;
    
    return 0;
}