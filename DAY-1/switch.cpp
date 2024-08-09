#include <iostream>
using namespace std;
int main()
{
    cout << "---------------------------------" << endl;
    cout << "\tCALCULATOR\t" << endl;
    cout << "---------------------------------" << endl;
    cout << "Enter 1 for Addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    cout << "Enter 3 for Multiplication" << endl;
    cout << "Enter 4 for Division" << endl;

    int choice;
    cout << "Enter your choice:";
    cin >> choice;
    cout << "---------------------------------" << endl;
    int num1;
    cout << "enter first number: ";
    cin >> num1;

    int num2;
    cout << "enter second number:";
    cin >> num2;

    cout << "-----------------------------------" << endl;
    switch (choice)
    {
    case 1:
        cout << num1<< "+" <<num2<<"="<< num1 + num2;
        break;
    case 2:
        cout << num1<< "-" <<num2<<"="<< num1 - num2;
        break;
    case 3:
        cout << num1<< "*" <<num2<<"="<< num1 * num2;
        break;
    case 4:
        if(num1==0 || num2==0) cout<<"Divide by 0 is not allowed";
        else{
            cout << num1<< "/" <<num2<<"="<< num1 / num2;
        }
        break;
    default:
        cout << "Invalid choice";
    }
    return 0;
}