#include<iostream>
using namespace std;
class bank{
    private:
        int accNo;
        int balance=0;
    public:
        bank(int a,int b){
            accNo=a;
            balance=b;
        }
        void deposit(int amount){
            balance+=amount;
        }
        void withDraw(int amount){
            balance-=amount;
        }
        void display(){
            cout<<"The balance is:"<<balance<<endl;
        }
};
int main(){
    bank b1(123,0);
    b1.deposit(100);
    b1.display();
    b1.withDraw(50);
    b1.display();

}