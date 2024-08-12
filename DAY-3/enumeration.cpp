#include <iostream>
using namespace std;

enum Day{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum colour{red,green,blue};

int main()
{
    Day today;
    today = Wednesday; //we can only store the constants declared under enum day
    cout<<sizeof(today)<<endl; //size is 4 byte because in today we can only store one constant at a time
    cout << "Day " << today+1;
    return 0;
}