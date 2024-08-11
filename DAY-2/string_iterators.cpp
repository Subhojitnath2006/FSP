#include <iostream>
#include <string>
using namespace std;

int main()
{
    // char s[50] = "Hello World"; //c style string
    // cout << s << endl;
    // int count=0;

    // //FIND HOW MANY o IN THE STRING
    // for(int i=0; s[i]!='\0'; i++){
    //     if(s[i] == 'o'){
    //         count++;
    //     }
    // }

    // cout << count << endl;

    string str; //c++ style string
    cout<<"Enter a string: ";
    getline(cin,str);
    auto start = str.begin(); // start iterator
    auto end = str.end(); // end iterator
    // int count=0;
    // for(auto i=start; i != end; i++){
    //     if(*i == 'o'){
    //         count++;
    //     }
    // }
    // cout << count << endl;
    
    // print the string
    // cout<<"String: ";
    // for(auto it=start; it!=end; it++)
    // {
    //     cout<<*it;
    // }
    // cout<<endl;
    
//     //reverse case of each character
    for(auto it=start; it!=end; it++)
    {   
        if(isupper(*it))
            *it = tolower(*it);
        else if(isupper(*it))
            *it = toupper(*it);
    }
    cout<<"after case change: str = " << str << endl;

//     // reverse iterator
    // auto rstart = str.rbegin();
    // auto rend = str.rend();
    
    // cout<<"Reverse Iterator: ";
    // for(auto it=rstart; it!=rend; it++)
    // {
    //     cout<<*it;
    // }
    // cout<<endl;
    
//     // reverse print with index
    // cout<<"Index: Character (Reverse)"<<endl;
    // int rindex=0;
    // for(auto it=rstart; it!=rend; it++)
    // {
    //     cout<<rindex++<<": "<<*it<<endl;
    // }
    
    return 0;
}