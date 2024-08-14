#include <iostream>
using namespace std;

class Balance
{
private:
    int x;

public:
    // Constructor
    Balance(int X = 0 /*defaut arguments*/) : x(X) {}

    // Overloading the + operator.
    Balance operator+(Balance b2)
    {
        Balance b3;
        b3.x = this->x + b2.x;
        return b3;
    }

    //overloading the - operator
    Balance operator-(Balance b2)
    {
        Balance b3;
        b3.x = this->x - b2.x;
        return b3;
    }
    //overloading the - operator using integer argument
    Balance operator-(int val)
    {
        Balance b3;
        b3.x = this->x - val;
        return b3;
    }
    // Print value of x.
    void print()
    {
        cout << x << endl;
    }
};

int main()
{
    Balance b1(1000), b2(1000);
    //we cant add two 
    Balance b3 = b1 + b2; // b1.operator+(b2);
    Balance b4=b1-500; //b1.operator-(500);
    Balance b5=b1-b2; //b1.operator-(b2);


    cout << "After addition:";
    b3.print();
    
    
    cout << "After subtraction 1:";
    b4.print();
    


    cout << "After subtraction 2:";
    b5.print();
    

    return 0;
}
