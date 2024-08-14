#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    try{
        // Open the file in write mode
        ofstream myfile("sample.txt");
        if (myfile.is_open())
        {
            myfile << "Writing this to a file." << endl;
            myfile.close();
        }

        // Now read the file
        ifstream myfile1("sample.txt");
        if (myfile1.is_open())
        {
            string line;
            while (getline(myfile1, line))
            {
                cout << line << endl;
            }
            myfile1.close();
        }
    }
    catch(const exception &e)
    {
        cerr << "Exception Occurred: "<< e.what() << endl;
        return 1; // Indicate an error occurred
    }
    return 0;
}