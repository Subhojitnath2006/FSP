#include <iostream>
using namespace std;

class Person{
   private:
     string name;
     int age;

   public:
     //Default constructor
     Person() : name(""), age(0) { cout <<"In the default constructor."<<endl; }

     //Parameterized constructor
     Person(string n, int a) : name(n), age(a) { cout <<"In the parameterized constructor."<<endl; }

     //Destructor
     ~Person() { cout <<"In the destructor."<<endl; }

     void setName(string n) { name = n; }

     string getName() { return name; }

     void setAge(int a) { age = a; }

     int getAge() { return age; }

     void print() { cout << "Person name : " << name << ", age = " << age << endl; }
};

int main(){
     Person p1;
     p1.setName("James");
     p1.setAge(20);
     cout << "Name : " << p1.getName()
          << " Age : " << p1.getAge() <<endl;

     Person p2 ("Harsh", 40);
     p2.print();
     
     return 0;
}