#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string:";
    getline(cin,s);

    char str[50];
    cout<<"enter a string:";
    //cin.getline(str,50);
    cin.get(str,50);

    cout<<s<<endl;
    cout<<str;
}