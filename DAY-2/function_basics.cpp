#include<iostream>
using namespace std;
int maxOfFour(int a,int b,int c,int d){
    int max;
    // if(a>b && a>c && a>d) max=a;
    // else if(b>a && b>c && b>d) max=b;
    // else if(c>a && c>b && c>d)max=c;
    // else max=d;
    max=(a>b && a>c && a>d) ? a:(b>a && b>c && b>d) ? b:(c>a && c>b && c>d) ?c:d;
        return max;
}
int main(){
    int n1,n2,n3,n4;
    cout<<"Enter first Number:";
    cin>>n1;
    cout<<"Enter Second Number:";
    cin>>n2;
    cout<<"Enter Third Number:";
    cin>>n3;
    cout<<"Enter Fourth Number:";
    cin>>n4;

    int maximum=maxOfFour(n1,n2,n3,n4);
    cout<<"The Maximum Number is:"<<maximum;

}