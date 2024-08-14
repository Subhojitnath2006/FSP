#include <iostream>
#include<string>
using namespace std;

template<class T>
class Compare {
    public:
        T mini(T s1, T s2) {
            return (s1 < s2) ? s1 : s2;
        }
};

int main() {
    Compare<int> comp;
    int MinInt = comp.mini(10, 9);
    cout << "Min integer is "<<MinInt << endl;
    char MinChar=comp.mini('a','d');
    cout<<"Min character is "<<MinChar<<endl;
    
    Compare<string>compare;
    string MinString=compare.mini("subhojit","nath");
    cout<<"Min string is "<<MinString<<endl;
    return 0;
}
