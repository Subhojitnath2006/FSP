#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter your choice:";
    cin >> choice;
    cout << "---------------------------------" << endl;

    do
    {
        if(choice==0) break;
        int num;
        cout << "Enter a number:";
        cin >> num;

        if (num < 0){
            printf("enter valid number.");
            cout<<endl;
        }    
        else
        {
            switch(choice){
                case 1:
                cout<<"The divisors are:";
                
                for (int i = num; i > 0; i--)
                {
                if (num % i == 0)
                    cout << i << " ";
                }
                cout<<endl;
                break;
                default:cout<<"Enter valid choice"<<endl;
            }
            
        }
    }while(choice!=0);

    return 0;
}