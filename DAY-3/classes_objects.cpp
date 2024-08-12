#include <iostream>
using namespace std;

class Person{
   private:
        string name; //data member
        int age;//data member

   public:
          //member functions
        void setName(string n) //setter function-->accessors methods
        { name = n; }

        string getName() //getter functions-->accessors methods
        { return name; }

        void setAge(int a)//setter function-->accessors methods
        { age = a; }

        int getAge()//getter functions-->accessors methods
        { return age; }
        Person(string n,int a){ // parametrized constructor
            cout<<"In the parametrized constructor"<<endl;
            name=n;
            age=a;
        }

     //    Person(string n,int a): name(n),age(a){ // initializing list constructor
     //        cout<<"In the parametrized constructor"<<endl;
            
     //    }
        Person(const Person&){

        }

};

int main(){
    Person p1("xyz",80);
//     p.setName("James");
//     p.setAge(20);
    cout << "Name : " << p1.getName()<<endl
         << " Age : " << p1.getAge() <<endl;

     // string s("abc"); //another way to declare strings
     // string s1(s); //copy constructor
     // cout<<s<<endl;
     // cout<<s1<<endl;
    return 0;
}