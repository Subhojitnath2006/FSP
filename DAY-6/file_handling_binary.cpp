#include <iostream>
#include <fstream>
using namespace std;

class Person{
   private:
     string name;
     int age;

   public:
     //Default constructor
     Person() : name(""), age(0) {}

     //Parameterized constructor
     Person(string n, int a) : name(n), age(a) {}

     void setName(string n) { name = n; }

     string getName() { return name; }

     void setAge(int a) { age = a; }

     int getAge() { return age; }

     void print() { cout << "Person name : " << name << ", age = " << age << endl; }
};

int main(){
    string name;
    cout << "Enter name: ";
    cin >> name;
    
    int age;
    cout << "Enter age: ";
    cin >> age;

    Person p1(name, age);

    try{
        // Write Person object to a binary file
        ofstream outfile("person.dat", ios::binary | ios::app);
        if (outfile.is_open())
        {
            cout<<"Successfully opened the binary file in write mode."<<endl;
            outfile.write(reinterpret_cast<char*>(&p1), sizeof(Person));
            cout << "Person object written to file." << endl;            
            outfile.close();
            cout<<"Successfully closed the file."<<endl;
        }
        else
        {
            cout << "Unable to open file for writing." << endl;
        }

        // Read Person object from binary file
        Person p2;
        ifstream infile("person.dat", ios::binary);
        if (infile.is_open())
        {
            cout<<"Successfully opened the binary file in read mode."<<endl;
            
            while(!infile.eof()){
                infile.read(reinterpret_cast<char*>(&p2), sizeof(Person));
                cout << "Person object read from file." << endl;
                p2.print();
            }
            
            infile.close();
            cout<<"Successfully closed the file."<<endl;
        }
        else
        {
            cout << "Unable to open file for reading." << endl;
        }
    }
    catch(const exception &e)
    {
        cerr << "Exception Occurred: "<< e.what() << endl;
        return 1; // Indicate an error occurred
    }
    return 0;
}