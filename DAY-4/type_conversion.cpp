#include <iostream>
using namespace std;

class Car{
    protected: 
       string number;
       string color;
    public:
        Car(): number(""), color("WHITE"){
            cout<<"Inside Car's default constructor"<<endl;
        }
        ~Car(){
            cout<<"Inside Car's destructor"<<endl;
        }

        void display(){
            cout<<"Car Number: "<<number<<endl;
            cout<<"Car Color: "<<color<<endl;
        }
};

class Truck : public Car{
    private:
        float loadCapacity;
    public:
        Truck(): loadCapacity(1000){
            cout<<"Inside Truck's default constructor"<<endl;
        }

        ~Truck(){
            cout<<"Inside Truck's desctructor"<<endl;
        }

        void display(){
            cout<<"Truck number:"<<number<<endl;
            cout<<"Truck color:"<<color<<endl;
            cout<<"Truck load capacity:"<<loadCapacity<<endl;
        }
};

int main(){
    Car c;
    Truck t;
    c=t;
    c.display();
    return 0;
}