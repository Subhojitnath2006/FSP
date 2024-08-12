#include <iostream>
using namespace std;

class person {
    private:
        
        int age;
        
    public:
        person(int a){age=a;}
        void displayAge(){
            cout<<"age:"<<this->age<<endl;
            
        }
        friend void add(person &obj,int x);
        
};

void add(person &obj,int x){
    obj.age+=x;
    //cout<<obj.age<<endl;
}

int main() {

    person p(10);
    
    p.displayAge();

    add(p,10);

    p.displayAge();

    
    
    return 0;
}
