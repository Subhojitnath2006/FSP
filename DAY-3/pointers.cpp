#include<iostream>
using namespace std;
void mySwap(int *a,int *b){//pass by reference
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<&a<<endl<<&b<<endl;
}
void mySwap2(int a,int b){//pass by reference
    int temp=a;
    a=b;
    b=temp;
    
}
int main(){

    // int a=5;
    // //int b=&a; invalid because b is of integer type but &a is of integer pointer type
    // int* b=&a;
    // cout<<b; //prints address of a
    // cout<<*b;//prints value of a
//disadbantage--> dangling of array;
//advantage-->
    // int arr[]={1,2,3,4,5};
    // int *p2=arr;
    // cout<<*p2<<endl;
    // cout<<*p2+1<<endl;
    
    //cout<<p1<<endl<<p2;
    int x=3;
    int y=5;
    int& ref1=x;
    int& ref2=y;
    //cout<<&x<<endl<<&y<<endl;
    cout<<"Before Swap:x= "<<ref1<<" y= "<<ref2<<endl;
    mySwap2(ref1,ref2);
    cout<<"Before Swap:x= "<<ref1<<" y= "<<ref2<<endl;
    // int var1 = 10; // create a variable
    // // incorrect code [reference not initialized]
    // int& ref_var1;
    // ref_var1 = var1; 
    // int& ref_var1 = var1;

    // int a=5;
    // int &ref=a;
    // cout<<a<<endl;
    // cout<<ref<<endl;
    // cout<<&a<<endl;
    // cout<<&ref<<endl;
    return 0;
}