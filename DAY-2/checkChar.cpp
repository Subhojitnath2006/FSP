#include<iostream>
#include<cctype>
using namespace std;
void checkChar(char ch){
    if(isalpha(ch)) cout<<"Alphabet";
    else if(isdigit(ch)) cout<<"Digit";
    else if(islower(ch)) cout<<"Lowercase";
    else if(ispunct(ch)) cout<<"Punctuation";
    else if(isspace(ch)) cout<<"WhiteSpace";
    else if(isblank(ch)) cout<<"Blank character";
    else if(isupper(ch)) cout<<"Uppercase";
    else if(isxdigit(ch)) cout<<"Hexadecimal character";
    else if(tolower(ch)) cout<<ch;
    else if(toupper(ch)) cout<<ch;
    else cout<<"INVALID INPUT";
}
int main(){
    char ch;
    cout<<"enter a character: ";
    cin.get(ch);

    checkChar(ch);
}