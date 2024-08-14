#include <iostream>
using namespace std;

// Template function that will be adding two data.
template <class T>
T add(T a, T b)
{
   return (a + b);
}

// Main function
int main()
{
   // Variables to store results of different data types.
   int ans1;
   double ans2;

   // Calling template function with int parameters.
   ans1 = add(2, 2);
   cout << "Sum of 2 + 2 is: " << ans1 << endl;

   // Calling template function with double parameters.
   // ans2 = add(2.5, 3.1);
   // cout << "Sum of 2.5 + 3.5 is: " << ans2 << endl;

   // string str=add("abc","def");
   // cout<<str;

   return 0;
}
