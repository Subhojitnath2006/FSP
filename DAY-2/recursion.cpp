#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
     return n*factorial(n-1);
}
int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fib(n-2)+fib(n-1);
}
int gcd(int a, int b) {
    if (b == 0)  return a;
    return gcd(b, a % b);
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int fac=factorial(n);
    cout<<"Factorial is:"<<fac<<endl;
    int fibo=fib(n);
    cout<<n<<" th term of fibonassci series is:"<<fibo<<endl;

    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;

    cout<<"the gcd is:"<<gcd(a,b);

}