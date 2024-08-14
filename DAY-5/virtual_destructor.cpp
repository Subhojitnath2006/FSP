#include <iostream>
using namespace std;

class Parent{
    public:
        virtual ~Parent(){
            cout<<"Parent Destructor"<<endl;
        }
};

class Child: public Parent{
    public:
        ~Child(){
            cout<<"Child Destructor"<<endl;
        }
};

int main(){
    Parent *p = new Child();
    delete p;
    return 0;
}