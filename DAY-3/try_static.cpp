#include <iostream>
using namespace std;

class person {
    private:
        
        int age;
        static int count;
    public:
        
        void display(){
            cout<<"age:"<<this->age<<endl;
            cout<<person::age;
            cout<<count;
        }
        static void displaystatic(){
            count++;
            cout<<"count:"<<count<<endl;
            cout<<person::count; //we can access static member inside a  static member function using class_name::
            

        }
};
//summary->non static function--> non static data, non static function,this pointer can be accessed
//summary-->static function--> can be accessed static data,static functions only


// Initialize static member
int person::count = 0;

int main() {

    person p;
    p.display();

    person::displaystatic();
    p.displaystatic();
    
    return 0;
}
