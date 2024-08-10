#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Su Mo Tu We Th Fr Sa"<<endl;
    for(int i=1;i<5;i++){
        cout<<"   ";
    }
    for(int i=1;i<=31;i++){
        cout<<setw(2)<<i<<" ";
        if((i+4)%7==0){
            cout<<endl;
        }
    }
    return 0;
}