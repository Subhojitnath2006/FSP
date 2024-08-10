#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int arr[3][4];
    for(auto &i:arr){
        for(auto j:i){
            cout<<"Enter A"<<"["<<i<<"]"<<"["<<j<<"] = ";
            cin>>j;    
        }
    }

    for(auto &i:arr){
        for(auto j:i){
             cout<<setw(2)<<j<<" ";
        }
        cout<<endl;
    }
}