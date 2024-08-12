#include<iostream>
using namespace std;
class person{
    private:
        string name;
        int age;
    public:
        void setName(string n) //setter function-->accessors methods
        { name = n; }

        string getName() //getter functions-->accessors methods
        { return name; }

        void setAge(int a)//setter function-->accessors methods
        { age = a; }

        int getAge()//getter functions-->accessors methods
        { return age; }

        person(){ // default constructor
            name="noname";
            age=-100;
        }
        ~person(){
            cout<<"In the destructor"<<endl;
        }

};
int main(){
    person p1;
    cout<<p1.getName()<<endl
    <<p1.getAge()<<endl;
}