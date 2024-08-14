#include<iostream>
using namespace std;
// int main(){
//     try{
//         throw 10; 
//     }
//     catch(char *exp){
//         cout<<"caught"<<endl;
//     }
//     catch(...){
//         cout<<"Default execution\n";
//     }
//     return 0;
// }
// int main()
// {
//     int x = -10;
//     try {
//     	cout << "Before Error\n";
//     	if (x < 0) {
//         	throw x;
//         	cout << "After Error\n";
//     	}
//     }
//     catch (int x) {
//     	cout << "Exception Caught \n";
//     }
//     cout << "After catch \n";
//     return 0;
// }

int main(){
    
    try{
        int age;
        cout<<"Enter age: ";
        cin>>age;
        if(age<18){
            throw "Access Rejected";
        }
        else{
            throw "Access Granted";
        }
    }
    catch(const char* errorMessage){
        cout<<errorMessage<<endl;
    }
    catch(...){
        cout<<"Invalid Input"<<endl;
    }
}

