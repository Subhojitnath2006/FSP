#include <iostream>
using namespace std;
int main()
{
  int marks;

  cout<<"Enter your Marks:";
  cin>>marks;

  string result= (marks>=75) ? "DISTINCTION":(marks>=60 && marks<=75)?"Pass":"Fail";
  cout<<result;
  return 0;
}