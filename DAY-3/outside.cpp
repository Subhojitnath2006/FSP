#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    // Member Functions initializing inside the Class
    Person();
    ~Person();
    void setName(string);
    string getName();

    void setAge(int);
    int getAge();
};
// Member functions defined Outside the class
Person::Person() : name("noname"), age(20)
{
    cout << "In the default constructor"<<endl;
}
Person::~Person()
{
    cout << "In the default destructor"<<endl;
}
void Person::setName(string n)
{
    name = n;
}
string Person::getName()
{
    return name;
}
void Person::setAge(int a)
{
    age = a;
}
int Person::getAge()
{
    return age;
}
int main()
{
    Person p1;
    cout << p1.getName() << endl
         << p1.getAge() << endl;
}