#include <iostream>
using namespace std;

struct phone
{
    
    int countryCode;
    int stateCode;
    int phNumber;
};
void display(phone p){
    cout<<"The Phone Number is:";
    cout<<"(+"<<p.countryCode<<")"<<p.stateCode<<"-"<<p.phNumber<<endl;
}
phone getNumber(){
    phone p;

    cout<<"Enter Country code:";
    cin>>p.countryCode;
    cout<<"Enter State code:";
    cin>>p.stateCode;
    cout<<"Enter Phone Number:";
    cin>>p.phNumber;
    return p;

}
int main(){
    // phone p1={91,612,2236478};
    // display(p1);

    // phone p2=getNumber();
    // display(p2);

    int n;
    cout<<"enter no of phone no to add:";
    cin>>n;
    phone p[10];
    for(int i=0;i<n;i++){
        p[i]=getNumber();
        display(p[i]);
    }
}