#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;
void display(int firstDay,int totalDay){
    cout<<"Su Mo Tu We Th Fr Sa"<<endl;
    for(int i=1;i<firstDay;i++){
        cout<<"   ";
    }
    for(int i=1;i<=totalDay;i++){
        cout<<setw(2)<<i<<" ";
        if((i+firstDay-1)%7==0){
            cout<<endl;
        }
    }
}
int main(){
    int firstDay=6;
    int month;
    cout<<"Enter Month:";
    cin>>month;
    int daysInMonth;
    switch(month){
        case 1: daysInMonth=31;
                break;
    }
    display(firstDay,daysInMonth);
    return 0;
}