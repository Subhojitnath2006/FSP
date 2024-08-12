#include <iostream>
using namespace std;

class person {
    private:
        string name;
        int age;
        static int count;
    public:
        void setName(string n) { // Setter function
            name = n;
        }

        string getName() { // Getter function
            return this->name;
        }

        void setAge(int a) { // Setter function
            age = a;
        }

        int getAge() { // Getter function
            return age;
        }

        person(string name, int age) { // Parameterized constructor
            this->name = name;
            this->age = age;
            count++;
            cout << "Count after creation: " << count << endl;
        }
        static void display(){
            cout<<"this is:"<<count<<endl;
        }
        ~person() { // Destructor
            count--;
            cout << "Count after destruction: " << count << endl;
        }
};

// Initialize static member
int person::count = 0;

int main() {
    person p1("subhojit", 19);
    cout << p1.getName() << endl << p1.getAge() << endl;
    p1.display();

    person p2("subhojit", 19);
    cout << p2.getName() << endl << p2.getAge() << endl;
    p2.display();

    person p3("subhojit", 19);
    cout << p3.getName() << endl << p3.getAge() << endl;
    p3.display();
    return 0;
}
