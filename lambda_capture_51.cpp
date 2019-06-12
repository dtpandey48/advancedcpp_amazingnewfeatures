#include <iostream>
using namespace std;

int main() {
  int one = 1;
  int two = 2;
  int three = 3;
  
  //capture one and two by value
  [one,two](){count << one << "," << two << endl;}();
  
  // capture all local variables by value
  [=](){count << one << "," << two << endl;}();
  
  // Default capture all local variables by value, but capture three by reference
  [=, &three](){three=7; count << one << "," << two << endl;}();
  cout << three << endl;
  
  // Default capture all local variables by reference
  [&](){three=7; two=8; count << one << "," << two << endl;}();
  cout << two << endl;
  
  // Default capture all local variables by reference, but two and three by value
  [&,two,three](){one=100, count << one << "," << two << endl;}();
  cout << one << endl;
  
  return 0;
}
