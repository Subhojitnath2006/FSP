#include<iostream>
using namespace std;

class Count {
    int x;
    public:
        // Constructor
        Count(int X = 0): x(X) {}

        // Overloading the ++ operator.
        Count operator++() {
            Count c;
            c.x = ++x;
            return c;
        }
        // Print value of x.
        void print() {
            cout << x << endl;
        }
};

int main() {
    Count c1(42);

    cout << "Before using ++ operator: ";
    c1.print();

    Count c2 = ++c1; //it goes into operator++ method.
    cout << "After using ++ operator: ";
    c2.print();

    return 0;
}
