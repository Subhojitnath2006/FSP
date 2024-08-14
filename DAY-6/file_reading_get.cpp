#include <fstream>
#include<iostream>
using namespace std;

int main ()
{
    ifstream myfile("sample.txt");
    if (myfile.is_open()) {
        char mychar;
        while (myfile.good())   // or while(!myfile.eof())
        {
            mychar = myfile.get();
            cout << mychar;
        }
    }
    return 0;
}

