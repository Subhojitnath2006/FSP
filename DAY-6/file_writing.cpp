#include <fstream>
#include<iostream>
#include<string>
#include<string>
using namespace std;

int main ()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);


//writing the file
    ofstream offile;
    offile.open("sample.txt",ios::app);

    offile<<str;

    offile.close();

    //reading the file
    ifstream ifile;
    ifile.open("sample.txt");

    if(ifile.is_open()){
        char ch;
        while(!ifile.eof()){
            ch=ifile.get();
            cout<<ch;
        }
        ifile.close();
    }
   
    
    return 0;
}