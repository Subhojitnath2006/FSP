#include <iostream>
using namespace std;

class Balance
{
private:
    int x;

public:
    // Constructor
    Balance(int X = 0) : x(X) {}

    // Overloading the ++ operator.
    Balance operator+(Balance b2)
    {
        Balance b3;
        b3.x = this->x + b2.x;
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
    cout << "the total amount is:";
    b3.print();
    cout << endl;

    return 0;
}
