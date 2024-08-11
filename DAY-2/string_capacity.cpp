#include <iostream>
using namespace std;  

int main() {
  string str = "Welcome to C++ Programming";
  cout<<"Initially: "<<str<<endl;
  cout << "Capacity: " <<str.capacity() << endl;
  cout << "Size: " <<str.size()<<endl;

  // using resize
  str.resize(17);
  cout<<"After resize: "<<str<<endl;
  cout << "Capacity: " <<str.capacity() << endl;
  cout << "Size: " <<str.size()<<endl;

  str.shrink_to_fit();

  cout<<"After shrink_to_fit: "<<str<<endl;
  cout << "Capacity: " <<str.capacity() << endl;
  cout << "Size: " <<str.size()<<endl;

  return 0;
}
