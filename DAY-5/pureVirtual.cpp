#include <iostream>
using namespace std;
class A{
    public:
     virtual void print()=0;
};
class B:public A{
    void print(){
        cout<<"Hello";
    }
};
int main(){
    B obj;
    

}