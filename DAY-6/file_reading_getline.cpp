#include <fstream>
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    ifstream myfile("sample.txt");
    if (myfile.is_open()) {
        string myline;
        while (myfile.good()) {
            getline (myfile, myline);
            cout << myline << endl;
        }
    }
    return 0;
}

